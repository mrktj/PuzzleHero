/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Timestamp
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_DECL
#define J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/CertPath.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Timestamp;
	class Timestamp
		: public object<Timestamp>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Timestamp(jobject jobj)
		: object<Timestamp>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		Timestamp(local_ref< java::util::Date > const&, local_ref< java::security::cert::CertPath > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::security::cert::CertPath > getSignerCertPath();
		local_ref< java::util::Date > getTimestamp();
		jint hashCode();
		local_ref< java::lang::String > toString();
	}; //class Timestamp

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_IMPL
#define J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_IMPL

namespace j2cpp {



java::security::Timestamp::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::Timestamp::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::Timestamp::Timestamp(local_ref< java::util::Date > const &a0, local_ref< java::security::cert::CertPath > const &a1)
: object<java::security::Timestamp>(
	call_new_object<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(0),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


jboolean java::security::Timestamp::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(1),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::security::cert::CertPath > java::security::Timestamp::getSignerCertPath()
{
	return call_method<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(2),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::cert::CertPath >
	>(get_jobject());
}

local_ref< java::util::Date > java::security::Timestamp::getTimestamp()
{
	return call_method<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(3),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::Date >
	>(get_jobject());
}

jint java::security::Timestamp::hashCode()
{
	return call_method<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(4),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::security::Timestamp::toString()
{
	return call_method<
		java::security::Timestamp::J2CPP_CLASS_NAME,
		java::security::Timestamp::J2CPP_METHOD_NAME(5),
		java::security::Timestamp::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::Timestamp,"java/security/Timestamp")
J2CPP_DEFINE_METHOD(java::security::Timestamp,0,"<init>","(Ljava/util/Date;Ljava/security/cert/CertPath;)V")
J2CPP_DEFINE_METHOD(java::security::Timestamp,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::Timestamp,2,"getSignerCertPath","()Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::Timestamp,3,"getTimestamp","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::Timestamp,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::Timestamp,5,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_TIMESTAMP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
