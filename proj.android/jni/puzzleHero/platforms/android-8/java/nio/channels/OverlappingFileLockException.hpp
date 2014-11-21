/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.OverlappingFileLockException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class OverlappingFileLockException;
	class OverlappingFileLockException
		: public object<OverlappingFileLockException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit OverlappingFileLockException(jobject jobj)
		: object<OverlappingFileLockException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::IllegalStateException>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		OverlappingFileLockException();
	}; //class OverlappingFileLockException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::OverlappingFileLockException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::nio::channels::OverlappingFileLockException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::OverlappingFileLockException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}

java::nio::channels::OverlappingFileLockException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::channels::OverlappingFileLockException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::channels::OverlappingFileLockException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::nio::channels::OverlappingFileLockException::OverlappingFileLockException()
: object<java::nio::channels::OverlappingFileLockException>(
	call_new_object<
		java::nio::channels::OverlappingFileLockException::J2CPP_CLASS_NAME,
		java::nio::channels::OverlappingFileLockException::J2CPP_METHOD_NAME(0),
		java::nio::channels::OverlappingFileLockException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::OverlappingFileLockException,"java/nio/channels/OverlappingFileLockException")
J2CPP_DEFINE_METHOD(java::nio::channels::OverlappingFileLockException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_OVERLAPPINGFILELOCKEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
