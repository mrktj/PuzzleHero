/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.routing.HttpRoute
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { namespace RouteInfo_ { class TunnelType; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { namespace RouteInfo_ { class LayerType; } } } } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/routing/RouteInfo.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace routing {

	class HttpRoute;
	class HttpRoute
		: public object<HttpRoute>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)

		explicit HttpRoute(jobject jobj)
		: object<HttpRoute>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::routing::RouteInfo>() const;


		HttpRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< java::net::InetAddress > const&, local_ref< array< local_ref< org::apache::http::HttpHost >, 1> > const&, jboolean, local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > const&, local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > const&);
		HttpRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< java::net::InetAddress > const&, local_ref< org::apache::http::HttpHost > const&, jboolean, local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > const&, local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > const&);
		HttpRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< java::net::InetAddress > const&, jboolean);
		HttpRoute(local_ref< org::apache::http::HttpHost > const&);
		HttpRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< java::net::InetAddress > const&, local_ref< org::apache::http::HttpHost > const&, jboolean);
		local_ref< org::apache::http::HttpHost > getTargetHost();
		local_ref< java::net::InetAddress > getLocalAddress();
		jint getHopCount();
		local_ref< org::apache::http::HttpHost > getHopTarget(jint);
		local_ref< org::apache::http::HttpHost > getProxyHost();
		local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > getTunnelType();
		jboolean isTunnelled();
		local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > getLayerType();
		jboolean isLayered();
		jboolean isSecure();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class HttpRoute

} //namespace routing
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::routing::HttpRoute::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::conn::routing::HttpRoute::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::routing::HttpRoute::operator local_ref<org::apache::http::conn::routing::RouteInfo>() const
{
	return local_ref<org::apache::http::conn::routing::RouteInfo>(get_jobject());
}


org::apache::http::conn::routing::HttpRoute::HttpRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< java::net::InetAddress > const &a1, local_ref< array< local_ref< org::apache::http::HttpHost >, 1> > const &a2, jboolean a3, local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > const &a4, local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > const &a5)
: object<org::apache::http::conn::routing::HttpRoute>(
	call_new_object<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5)
)
{
}



org::apache::http::conn::routing::HttpRoute::HttpRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< java::net::InetAddress > const &a1, local_ref< org::apache::http::HttpHost > const &a2, jboolean a3, local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > const &a4, local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > const &a5)
: object<org::apache::http::conn::routing::HttpRoute>(
	call_new_object<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4, a5)
)
{
}



org::apache::http::conn::routing::HttpRoute::HttpRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< java::net::InetAddress > const &a1, jboolean a2)
: object<org::apache::http::conn::routing::HttpRoute>(
	call_new_object<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



org::apache::http::conn::routing::HttpRoute::HttpRoute(local_ref< org::apache::http::HttpHost > const &a0)
: object<org::apache::http::conn::routing::HttpRoute>(
	call_new_object<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



org::apache::http::conn::routing::HttpRoute::HttpRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< java::net::InetAddress > const &a1, local_ref< org::apache::http::HttpHost > const &a2, jboolean a3)
: object<org::apache::http::conn::routing::HttpRoute>(
	call_new_object<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1, a2, a3)
)
{
}


local_ref< org::apache::http::HttpHost > org::apache::http::conn::routing::HttpRoute::getTargetHost()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::HttpHost >
	>(get_jobject());
}

local_ref< java::net::InetAddress > org::apache::http::conn::routing::HttpRoute::getLocalAddress()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::net::InetAddress >
	>(get_jobject());
}

jint org::apache::http::conn::routing::HttpRoute::getHopCount()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

local_ref< org::apache::http::HttpHost > org::apache::http::conn::routing::HttpRoute::getHopTarget(jint a0)
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(8),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::HttpHost >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::HttpHost > org::apache::http::conn::routing::HttpRoute::getProxyHost()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(9),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::apache::http::HttpHost >
	>(get_jobject());
}

local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType > org::apache::http::conn::routing::HttpRoute::getTunnelType()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(10),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::apache::http::conn::routing::RouteInfo_::TunnelType >
	>(get_jobject());
}

jboolean org::apache::http::conn::routing::HttpRoute::isTunnelled()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(11),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType > org::apache::http::conn::routing::HttpRoute::getLayerType()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(12),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::apache::http::conn::routing::RouteInfo_::LayerType >
	>(get_jobject());
}

jboolean org::apache::http::conn::routing::HttpRoute::isLayered()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(13),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::conn::routing::HttpRoute::isSecure()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(14),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::conn::routing::HttpRoute::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(15),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}

jint org::apache::http::conn::routing::HttpRoute::hashCode()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(16),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::conn::routing::HttpRoute::toString()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(17),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::conn::routing::HttpRoute::clone()
{
	return call_method<
		org::apache::http::conn::routing::HttpRoute::J2CPP_CLASS_NAME,
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_NAME(18),
		org::apache::http::conn::routing::HttpRoute::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::routing::HttpRoute,"org/apache/http/conn/routing/HttpRoute")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,0,"<init>","(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;[org.apache.http.HttpHostZLorg/apache/http/conn/routing/RouteInfo$TunnelType;Lorg/apache/http/conn/routing/RouteInfo$LayerType;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,1,"<init>","(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/HttpHost;ZLorg/apache/http/conn/routing/RouteInfo$TunnelType;Lorg/apache/http/conn/routing/RouteInfo$LayerType;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,2,"<init>","(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,3,"<init>","(Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,4,"<init>","(Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/HttpHost;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,5,"getTargetHost","()Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,6,"getLocalAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,7,"getHopCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,8,"getHopTarget","(I)Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,9,"getProxyHost","()Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,10,"getTunnelType","()Lorg/apache/http/conn/routing/RouteInfo$TunnelType;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,11,"isTunnelled","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,12,"getLayerType","()Lorg/apache/http/conn/routing/RouteInfo$LayerType;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,13,"isLayered","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,14,"isSecure","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,15,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,17,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoute,18,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
