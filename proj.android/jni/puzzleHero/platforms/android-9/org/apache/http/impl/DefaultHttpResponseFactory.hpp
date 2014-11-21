/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.DefaultHttpResponseFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ReasonPhraseCatalog; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseFactory; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/HttpResponseFactory.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/ReasonPhraseCatalog.hpp>
#include <org/apache/http/StatusLine.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class DefaultHttpResponseFactory;
	class DefaultHttpResponseFactory
		: public object<DefaultHttpResponseFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit DefaultHttpResponseFactory(jobject jobj)
		: object<DefaultHttpResponseFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpResponseFactory>() const;


		DefaultHttpResponseFactory(local_ref< org::apache::http::ReasonPhraseCatalog > const&);
		DefaultHttpResponseFactory();
		local_ref< org::apache::http::HttpResponse > newHttpResponse(local_ref< org::apache::http::ProtocolVersion >  const&, jint, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< org::apache::http::HttpResponse > newHttpResponse(local_ref< org::apache::http::StatusLine >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);

	}; //class DefaultHttpResponseFactory

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::DefaultHttpResponseFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::DefaultHttpResponseFactory::operator local_ref<org::apache::http::HttpResponseFactory>() const
{
	return local_ref<org::apache::http::HttpResponseFactory>(get_jobject());
}


org::apache::http::impl::DefaultHttpResponseFactory::DefaultHttpResponseFactory(local_ref< org::apache::http::ReasonPhraseCatalog > const &a0)
: object<org::apache::http::impl::DefaultHttpResponseFactory>(
	call_new_object<
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



org::apache::http::impl::DefaultHttpResponseFactory::DefaultHttpResponseFactory()
: object<org::apache::http::impl::DefaultHttpResponseFactory>(
	call_new_object<
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}


local_ref< org::apache::http::HttpResponse > org::apache::http::impl::DefaultHttpResponseFactory::newHttpResponse(local_ref< org::apache::http::ProtocolVersion > const &a0, jint a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1, a2);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::impl::DefaultHttpResponseFactory::newHttpResponse(local_ref< org::apache::http::StatusLine > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::DefaultHttpResponseFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1);
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::DefaultHttpResponseFactory,"org/apache/http/impl/DefaultHttpResponseFactory")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpResponseFactory,0,"<init>","(Lorg/apache/http/ReasonPhraseCatalog;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpResponseFactory,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpResponseFactory,2,"newHttpResponse","(Lorg/apache/http/ProtocolVersion;ILorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpResponseFactory,3,"newHttpResponse","(Lorg/apache/http/StatusLine;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpResponseFactory,4,"determineLocale","(Lorg/apache/http/protocol/HttpContext;)Ljava/util/Locale;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::DefaultHttpResponseFactory,0,"reasonCatalog","Lorg/apache/http/ReasonPhraseCatalog;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPRESPONSEFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
