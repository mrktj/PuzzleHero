/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.BasicSchemeFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthSchemeFactory; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/auth/AuthSchemeFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class BasicSchemeFactory;
	class BasicSchemeFactory
		: public object<BasicSchemeFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BasicSchemeFactory(jobject jobj)
		: object<BasicSchemeFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::auth::AuthSchemeFactory>() const;


		BasicSchemeFactory();
		local_ref< org::apache::http::auth::AuthScheme > newInstance(local_ref< org::apache::http::params::HttpParams >  const&);
	}; //class BasicSchemeFactory

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::BasicSchemeFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::auth::BasicSchemeFactory::operator local_ref<org::apache::http::auth::AuthSchemeFactory>() const
{
	return local_ref<org::apache::http::auth::AuthSchemeFactory>(get_jobject());
}


org::apache::http::impl::auth::BasicSchemeFactory::BasicSchemeFactory()
: object<org::apache::http::impl::auth::BasicSchemeFactory>(
	call_new_object<
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< org::apache::http::auth::AuthScheme > org::apache::http::impl::auth::BasicSchemeFactory::newInstance(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_method<
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::BasicSchemeFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::auth::AuthScheme >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::BasicSchemeFactory,"org/apache/http/impl/auth/BasicSchemeFactory")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicSchemeFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicSchemeFactory,1,"newInstance","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEMEFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
