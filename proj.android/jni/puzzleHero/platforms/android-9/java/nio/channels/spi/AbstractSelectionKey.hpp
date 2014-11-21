/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.spi.AbstractSelectionKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class SelectionKey; } } } }


#include <java/lang/Object.hpp>
#include <java/nio/channels/SelectionKey.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels { namespace spi {

	class AbstractSelectionKey;
	class AbstractSelectionKey
		: public object<AbstractSelectionKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AbstractSelectionKey(jobject jobj)
		: object<AbstractSelectionKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::channels::SelectionKey>() const;


		jboolean isValid();
		void cancel();
	}; //class AbstractSelectionKey

} //namespace spi
} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_IMPL

namespace j2cpp {



java::nio::channels::spi::AbstractSelectionKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::spi::AbstractSelectionKey::operator local_ref<java::nio::channels::SelectionKey>() const
{
	return local_ref<java::nio::channels::SelectionKey>(get_jobject());
}


jboolean java::nio::channels::spi::AbstractSelectionKey::isValid()
{
	return call_method<
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_METHOD_NAME(1),
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void java::nio::channels::spi::AbstractSelectionKey::cancel()
{
	return call_method<
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_METHOD_NAME(2),
		java::nio::channels::spi::AbstractSelectionKey::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::spi::AbstractSelectionKey,"java/nio/channels/spi/AbstractSelectionKey")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelectionKey,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelectionKey,1,"isValid","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelectionKey,2,"cancel","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTIONKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
