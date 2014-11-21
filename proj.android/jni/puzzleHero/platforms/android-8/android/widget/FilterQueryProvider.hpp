/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.FilterQueryProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/database/Cursor.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class FilterQueryProvider;
	class FilterQueryProvider
		: public object<FilterQueryProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit FilterQueryProvider(jobject jobj)
		: object<FilterQueryProvider>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::database::Cursor > runQuery(local_ref< java::lang::CharSequence >  const&);
	}; //class FilterQueryProvider

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_IMPL

namespace j2cpp {



android::widget::FilterQueryProvider::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::database::Cursor > android::widget::FilterQueryProvider::runQuery(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::FilterQueryProvider::J2CPP_CLASS_NAME,
		android::widget::FilterQueryProvider::J2CPP_METHOD_NAME(0),
		android::widget::FilterQueryProvider::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::FilterQueryProvider,"android/widget/FilterQueryProvider")
J2CPP_DEFINE_METHOD(android::widget::FilterQueryProvider,0,"runQuery","(Ljava/lang/CharSequence;)Landroid/database/Cursor;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_FILTERQUERYPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
