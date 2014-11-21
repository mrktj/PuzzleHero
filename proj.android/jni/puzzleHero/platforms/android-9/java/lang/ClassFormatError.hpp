/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ClassFormatError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_DECL
#define J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class LinkageError; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/LinkageError.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ClassFormatError;
	class ClassFormatError
		: public object<ClassFormatError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ClassFormatError(jobject jobj)
		: object<ClassFormatError>(jobj)
		{
		}

		operator local_ref<java::lang::LinkageError>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Error>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		ClassFormatError();
		ClassFormatError(local_ref< java::lang::String > const&);
	}; //class ClassFormatError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_IMPL

namespace j2cpp {



java::lang::ClassFormatError::operator local_ref<java::lang::LinkageError>() const
{
	return local_ref<java::lang::LinkageError>(get_jobject());
}

java::lang::ClassFormatError::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::ClassFormatError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jobject());
}

java::lang::ClassFormatError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ClassFormatError::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::ClassFormatError::ClassFormatError()
: object<java::lang::ClassFormatError>(
	call_new_object<
		java::lang::ClassFormatError::J2CPP_CLASS_NAME,
		java::lang::ClassFormatError::J2CPP_METHOD_NAME(0),
		java::lang::ClassFormatError::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::ClassFormatError::ClassFormatError(local_ref< java::lang::String > const &a0)
: object<java::lang::ClassFormatError>(
	call_new_object<
		java::lang::ClassFormatError::J2CPP_CLASS_NAME,
		java::lang::ClassFormatError::J2CPP_METHOD_NAME(1),
		java::lang::ClassFormatError::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::ClassFormatError,"java/lang/ClassFormatError")
J2CPP_DEFINE_METHOD(java::lang::ClassFormatError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ClassFormatError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSFORMATERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
