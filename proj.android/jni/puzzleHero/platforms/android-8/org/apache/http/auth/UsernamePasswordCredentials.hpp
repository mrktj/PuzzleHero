/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.UsernamePasswordCredentials
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class UsernamePasswordCredentials;
	class UsernamePasswordCredentials
		: public object<UsernamePasswordCredentials>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)

		explicit UsernamePasswordCredentials(jobject jobj)
		: object<UsernamePasswordCredentials>(jobj)
		{
		}

		operator local_ref<org::apache::http::auth::Credentials>() const;
		operator local_ref<java::lang::Object>() const;


		UsernamePasswordCredentials(local_ref< java::lang::String > const&);
		UsernamePasswordCredentials(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::security::Principal > getUserPrincipal();
		local_ref< java::lang::String > getUserName();
		local_ref< java::lang::String > getPassword();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class UsernamePasswordCredentials

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::UsernamePasswordCredentials::operator local_ref<org::apache::http::auth::Credentials>() const
{
	return local_ref<org::apache::http::auth::Credentials>(get_jobject());
}

org::apache::http::auth::UsernamePasswordCredentials::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::auth::UsernamePasswordCredentials::UsernamePasswordCredentials(local_ref< java::lang::String > const &a0)
: object<org::apache::http::auth::UsernamePasswordCredentials>(
	call_new_object<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



org::apache::http::auth::UsernamePasswordCredentials::UsernamePasswordCredentials(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::auth::UsernamePasswordCredentials>(
	call_new_object<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


local_ref< java::security::Principal > org::apache::http::auth::UsernamePasswordCredentials::getUserPrincipal()
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Principal >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::UsernamePasswordCredentials::getUserName()
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::UsernamePasswordCredentials::getPassword()
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint org::apache::http::auth::UsernamePasswordCredentials::hashCode()
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(5),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jboolean org::apache::http::auth::UsernamePasswordCredentials::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(6),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::UsernamePasswordCredentials::toString()
{
	return call_method<
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_NAME(7),
		org::apache::http::auth::UsernamePasswordCredentials::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::UsernamePasswordCredentials,"org/apache/http/auth/UsernamePasswordCredentials")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,2,"getUserPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,3,"getUserName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,4,"getPassword","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::UsernamePasswordCredentials,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_USERNAMEPASSWORDCREDENTIALS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
