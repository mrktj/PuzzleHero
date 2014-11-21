
#include "crypto/CCCrypto.h"

extern "C" {
#include "crypto/base64/libb64.h"
#include "crypto/md5/md5.h"
#include "crypto/sha1/sha1.h"
}

#if CC_LUA_ENGINE_ENABLED > 0
#include "CCLuaEngine.h"

extern "C" {
#include "lua.h"
#include "lapi.h"
#include "tolua_fix.h"
}
#endif

NS_CC_EXT_BEGIN

int CCCrypto::encodeBase64(const void* input,
                           int inputLength,
                           char* output,
                           int outputBufferLength)
{
    int bufferSize = 2 * inputLength;
    char* buffer = (char*)malloc(bufferSize);
    memset(buffer, 0, bufferSize);
    
    base64_encodestate state;
    base64_init_encodestate(&state);
    int r1 = base64_encode_block(static_cast<const char*>(input), inputLength, buffer, &state);
    int r2 = base64_encode_blockend(buffer+ r1, &state);
    
    int dataUsed = r1 + r2;
    memset(output, 0, outputBufferLength);
    int cp = dataUsed < outputBufferLength ? dataUsed : outputBufferLength - 1;
    memcpy(output, buffer, cp);
    free(buffer);
    return cp;
}

int CCCrypto::decodeBase64(const char* input,
                           void* output,
                           int outputBufferLength)
{
    int bufferSize = strlen(input) + 1;
    char* buffer = (char*)malloc(bufferSize);
    memset(buffer, 0, bufferSize);
    base64_decodestate state;
    base64_init_decodestate(&state);
    int r1 = base64_decode_block(input, bufferSize - 1, buffer, &state);
    
    memset(output, 0, outputBufferLength);
    int cp = r1 < outputBufferLength ? r1 : outputBufferLength - 1;
    memcpy(output, buffer, cp);
    free(buffer);
    return cp;
}

void CCCrypto::MD5(void* input, int inputLength, unsigned char* output)
{
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input, inputLength);
    MD5_Final(output, &ctx);
}

void CCCrypto::sha1(unsigned char* input, int inputLength,
                    unsigned char* key, int keyLength,
                    unsigned char* buffer, int bufferLength)
{
    SHA1 sha1;
    sha1.addBytes(input, inputLength);
    sha1.addBytes(key, keyLength);
    sha1.getDigest(buffer, bufferLength);
}

#if CC_LUA_ENGINE_ENABLED > 0

LUA_STRING CCCrypto::encodingBase64Lua(bool isDecoding,
                                       const char* input,
                                       int inputLength)
{
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    engine->cleanStack();
    
    int outputLength = inputLength * 2;
    char* output = static_cast<char*>(malloc(outputLength));
    int dataUsed = -1;
    
    if (isDecoding)
    {
        dataUsed = decodeBase64(input, output, outputLength);
    }
    else
    {
        dataUsed = encodeBase64(input, inputLength, output, outputLength);
    }
    if (dataUsed > 0 && dataUsed < outputLength)
    {
        engine->pushString(output, dataUsed);
    }
    else
    {
        engine->pushNil();
    }
    free(output);
    return 1;
}

LUA_STRING CCCrypto::MD5Lua(char* input, bool isRawOutput)
{
    unsigned char buffer[MD5_BUFFER_LENGTH];
    MD5(static_cast<void*>(input), strlen(input), buffer);
    
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    engine->cleanStack();
    
    if (isRawOutput)
    {
        engine->pushString((char*)buffer, MD5_BUFFER_LENGTH);
    }
    else
    {
        char* hex = bin2hex(buffer, MD5_BUFFER_LENGTH);
        engine->pushString(hex);
        delete[] hex;
    }
    
    return 1;
}

cocos2d::LUA_STRING CCCrypto::sha1Lua(char* input, char* key, bool isRawOutput)
{
    unsigned char buffer[SHA1_BUFFER_LENGTH];
    MD5(static_cast<void*>(input), strlen(input), buffer);
    
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    engine->cleanStack();
    
    if (isRawOutput)
    {
        engine->pushString((char*)buffer, SHA1_BUFFER_LENGTH);
    }
    else
    {
        char* hex = bin2hex(buffer, SHA1_BUFFER_LENGTH);
        engine->pushString(hex);
        delete[] hex;
    }
    
    return 1;
}

char* CCCrypto::bin2hex(unsigned char* bin, int binLength)
{
    static const char* hextable = "0123456789abcdef";

    int hexLength = binLength * 2 + 1;
    char* hex = new char[hexLength];
    memset(hex, 0, sizeof(char) * hexLength);
    
    int ci = 0;
    for (int i = 0; i < 16; ++i)
    {
        unsigned char c = bin[i];
        hex[ci++] = hextable[(c >> 4) & 0x0f];
        hex[ci++] = hextable[c & 0x0f];
    }

    return hex;
}

#endif

NS_CC_EXT_END
