/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.charset.UnmappableCharacterException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharacterCodingException; } } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/charset/CharacterCodingException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset {

	class UnmappableCharacterException;
	class UnmappableCharacterException
		: public object<UnmappableCharacterException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit UnmappableCharacterException(jobject jobj)
		: object<UnmappableCharacterException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::charset::CharacterCodingException>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;


		UnmappableCharacterException(jint);
		jint getInputLength();
		local_ref< java::lang::String > getMessage();
	}; //class UnmappableCharacterException

} //namespace charset
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::charset::UnmappableCharacterException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::charset::UnmappableCharacterException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::charset::UnmappableCharacterException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::charset::UnmappableCharacterException::operator local_ref<java::nio::charset::CharacterCodingException>() const
{
	return local_ref<java::nio::charset::CharacterCodingException>(get_jobject());
}

java::nio::charset::UnmappableCharacterException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::nio::charset::UnmappableCharacterException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::nio::charset::UnmappableCharacterException::UnmappableCharacterException(jint a0)
: object<java::nio::charset::UnmappableCharacterException>(
	call_new_object<
		java::nio::charset::UnmappableCharacterException::J2CPP_CLASS_NAME,
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_NAME(0),
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint java::nio::charset::UnmappableCharacterException::getInputLength()
{
	return call_method<
		java::nio::charset::UnmappableCharacterException::J2CPP_CLASS_NAME,
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_NAME(1),
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::nio::charset::UnmappableCharacterException::getMessage()
{
	return call_method<
		java::nio::charset::UnmappableCharacterException::J2CPP_CLASS_NAME,
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_NAME(2),
		java::nio::charset::UnmappableCharacterException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::charset::UnmappableCharacterException,"java/nio/charset/UnmappableCharacterException")
J2CPP_DEFINE_METHOD(java::nio::charset::UnmappableCharacterException,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::nio::charset::UnmappableCharacterException,1,"getInputLength","()I")
J2CPP_DEFINE_METHOD(java::nio::charset::UnmappableCharacterException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_UNMAPPABLECHARACTEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
