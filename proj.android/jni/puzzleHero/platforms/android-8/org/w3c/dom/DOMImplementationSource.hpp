/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.DOMImplementationSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementation; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementationList; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/DOMImplementation.hpp>
#include <org/w3c/dom/DOMImplementationList.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DOMImplementationSource;
	class DOMImplementationSource
		: public object<DOMImplementationSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DOMImplementationSource(jobject jobj)
		: object<DOMImplementationSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::w3c::dom::DOMImplementation > getDOMImplementation(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::DOMImplementationList > getDOMImplementationList(local_ref< java::lang::String >  const&);
	}; //class DOMImplementationSource

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_IMPL

namespace j2cpp {



org::w3c::dom::DOMImplementationSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::w3c::dom::DOMImplementation > org::w3c::dom::DOMImplementationSource::getDOMImplementation(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::DOMImplementationSource::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementationSource::J2CPP_METHOD_NAME(0),
		org::w3c::dom::DOMImplementationSource::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::DOMImplementation >
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::DOMImplementationList > org::w3c::dom::DOMImplementationSource::getDOMImplementationList(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::DOMImplementationSource::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementationSource::J2CPP_METHOD_NAME(1),
		org::w3c::dom::DOMImplementationSource::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::DOMImplementationList >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DOMImplementationSource,"org/w3c/dom/DOMImplementationSource")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementationSource,0,"getDOMImplementation","(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementationSource,1,"getDOMImplementationList","(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATIONSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
