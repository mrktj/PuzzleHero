/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.PoolEntryRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <org/apache/http/impl/conn/tsccm/BasicPoolEntry.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class PoolEntryRequest;
	class PoolEntryRequest
		: public object<PoolEntryRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PoolEntryRequest(jobject jobj)
		: object<PoolEntryRequest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > getPoolEntry(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void abortRequest();
	}; //class PoolEntryRequest

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::PoolEntryRequest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > org::apache::http::impl::conn::tsccm::PoolEntryRequest::getPoolEntry(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry >
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::tsccm::PoolEntryRequest::abortRequest()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::tsccm::PoolEntryRequest::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::PoolEntryRequest,"org/apache/http/impl/conn/tsccm/PoolEntryRequest")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::PoolEntryRequest,0,"getPoolEntry","(JLjava/util/concurrent/TimeUnit;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::PoolEntryRequest,1,"abortRequest","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_POOLENTRYREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
