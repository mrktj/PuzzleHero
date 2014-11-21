/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.sax.SAXSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Source.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace sax {

	class SAXSource;
	class SAXSource
		: public object<SAXSource>
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
		J2CPP_DECLARE_FIELD(0)

		explicit SAXSource(jobject jobj)
		: object<SAXSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::xml::transform::Source>() const;


		SAXSource();
		SAXSource(local_ref< org::xml::sax::XMLReader > const&, local_ref< org::xml::sax::InputSource > const&);
		SAXSource(local_ref< org::xml::sax::InputSource > const&);
		void setXMLReader(local_ref< org::xml::sax::XMLReader >  const&);
		local_ref< org::xml::sax::XMLReader > getXMLReader();
		void setInputSource(local_ref< org::xml::sax::InputSource >  const&);
		local_ref< org::xml::sax::InputSource > getInputSource();
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();
		static local_ref< org::xml::sax::InputSource > sourceToInputSource(local_ref< javax::xml::transform::Source >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
	}; //class SAXSource

} //namespace sax
} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_IMPL

namespace j2cpp {



javax::xml::transform::sax::SAXSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::transform::sax::SAXSource::operator local_ref<javax::xml::transform::Source>() const
{
	return local_ref<javax::xml::transform::Source>(get_jobject());
}


javax::xml::transform::sax::SAXSource::SAXSource()
: object<javax::xml::transform::sax::SAXSource>(
	call_new_object<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(0),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::xml::transform::sax::SAXSource::SAXSource(local_ref< org::xml::sax::XMLReader > const &a0, local_ref< org::xml::sax::InputSource > const &a1)
: object<javax::xml::transform::sax::SAXSource>(
	call_new_object<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(1),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



javax::xml::transform::sax::SAXSource::SAXSource(local_ref< org::xml::sax::InputSource > const &a0)
: object<javax::xml::transform::sax::SAXSource>(
	call_new_object<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(2),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


void javax::xml::transform::sax::SAXSource::setXMLReader(local_ref< org::xml::sax::XMLReader > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(3),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::XMLReader > javax::xml::transform::sax::SAXSource::getXMLReader()
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(4),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::xml::sax::XMLReader >
	>(get_jobject());
}

void javax::xml::transform::sax::SAXSource::setInputSource(local_ref< org::xml::sax::InputSource > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(5),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::InputSource > javax::xml::transform::sax::SAXSource::getInputSource()
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(6),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject());
}

void javax::xml::transform::sax::SAXSource::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(7),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::sax::SAXSource::getSystemId()
{
	return call_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(8),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< org::xml::sax::InputSource > javax::xml::transform::sax::SAXSource::sourceToInputSource(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_static_method<
		javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_NAME(9),
		javax::xml::transform::sax::SAXSource::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::xml::sax::InputSource >
	>(a0);
}


static_field<
	javax::xml::transform::sax::SAXSource::J2CPP_CLASS_NAME,
	javax::xml::transform::sax::SAXSource::J2CPP_FIELD_NAME(0),
	javax::xml::transform::sax::SAXSource::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::sax::SAXSource::FEATURE;


J2CPP_DEFINE_CLASS(javax::xml::transform::sax::SAXSource,"javax/xml/transform/sax/SAXSource")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,1,"<init>","(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,2,"<init>","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,3,"setXMLReader","(Lorg/xml/sax/XMLReader;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,4,"getXMLReader","()Lorg/xml/sax/XMLReader;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,5,"setInputSource","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,6,"getInputSource","()Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,7,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,8,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXSource,9,"sourceToInputSource","(Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_FIELD(javax::xml::transform::sax::SAXSource,0,"FEATURE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
