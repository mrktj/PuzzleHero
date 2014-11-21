
#ifndef __CC_EXTENSION_CCSTORE_PRODUCTS_REQUEST_DELEGATE_H_
#define __CC_EXTENSION_CCSTORE_PRODUCTS_REQUEST_DELEGATE_H_

#include "cocos2dx_extensions.h"

NS_CC_EXT_BEGIN

static const int CCStoreProductsRequestErrorPreviousRequestNotCompleted = -2;
static const int CCStoreProductsRequestErrorCancelled = -1;

class CCStoreProductsRequestDelegate
{
public:
    virtual void requestProductsCompleted(cocos2d::CCArray* products,
                                          cocos2d::CCArray* invalidProductsId = NULL) = 0;
    virtual void requestProductsFailed(int errorCode, const char* errorString) = 0;
};

NS_CC_EXT_END

#endif // __CC_EXTENSION_CCSTORE_PRODUCTS_REQUEST_DELEGATE_H_
