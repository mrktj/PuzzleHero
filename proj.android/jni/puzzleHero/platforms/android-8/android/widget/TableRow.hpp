/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.TableRow
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABLEROW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TABLEROW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { namespace TableRow_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { class LinearLayout; } } }
namespace j2cpp { namespace android { namespace widget { namespace LinearLayout_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class OnHierarchyChangeListener; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/LinearLayout.hpp>
#include <android/widget/TableRow.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TableRow;
	namespace TableRow_ {

		class LayoutParams;
		class LayoutParams
			: public object<LayoutParams>
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
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit LayoutParams(jobject jobj)
			: object<LayoutParams>(jobj)
			, column(jobj)
			, span(jobj)
			{
			}

			operator local_ref<android::widget::LinearLayout_::LayoutParams>() const;
			operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const;
			operator local_ref<android::view::ViewGroup_::LayoutParams>() const;
			operator local_ref<java::lang::Object>() const;


			LayoutParams(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
			LayoutParams(jint, jint);
			LayoutParams(jint, jint, jfloat);
			LayoutParams();
			LayoutParams(jint);
			LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const&);
			LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > column;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > span;
		}; //class LayoutParams

	} //namespace TableRow_

	class TableRow
		: public object<TableRow>
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

		typedef TableRow_::LayoutParams LayoutParams;

		explicit TableRow(jobject jobj)
		: object<TableRow>(jobj)
		{
		}

		operator local_ref<android::widget::LinearLayout>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		TableRow(local_ref< android::content::Context > const&);
		TableRow(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener >  const&);
		local_ref< android::view::View > getVirtualChildAt(jint);
		jint getVirtualChildCount();
		local_ref< android::widget::TableRow_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet >  const&);
		local_ref< android::widget::LinearLayout_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet >  const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_2(local_ref< android::util::AttributeSet >  const&);
	}; //class TableRow

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABLEROW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABLEROW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TABLEROW_HPP_IMPL

namespace j2cpp {




android::widget::TableRow_::LayoutParams::operator local_ref<android::widget::LinearLayout_::LayoutParams>() const
{
	return local_ref<android::widget::LinearLayout_::LayoutParams>(get_jobject());
}

android::widget::TableRow_::LayoutParams::operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::MarginLayoutParams>(get_jobject());
}

android::widget::TableRow_::LayoutParams::operator local_ref<android::view::ViewGroup_::LayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::LayoutParams>(get_jobject());
}

android::widget::TableRow_::LayoutParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::TableRow_::LayoutParams::LayoutParams(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(0),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams(jint a0, jint a1)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(1),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams(jint a0, jint a1, jfloat a2)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(2),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams()
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(3),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(3)
	>()
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams(jint a0)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(4),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(4)
	>(a0)
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(5),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(5)
	>(a0)
)
, column(get_jobject())
, span(get_jobject())
{
}



android::widget::TableRow_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
: object<android::widget::TableRow_::LayoutParams>(
	call_new_object<
		android::widget::TableRow_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_NAME(6),
		android::widget::TableRow_::LayoutParams::J2CPP_METHOD_SIGNATURE(6)
	>(a0)
)
, column(get_jobject())
, span(get_jobject())
{
}





J2CPP_DEFINE_CLASS(android::widget::TableRow_::LayoutParams,"android/widget/TableRow$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,2,"<init>","(IIF)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,3,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,4,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,5,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,6,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow_::LayoutParams,7,"setBaseAttributes","(Landroid/content/res/TypedArray;II)V")
J2CPP_DEFINE_FIELD(android::widget::TableRow_::LayoutParams,0,"column","I")
J2CPP_DEFINE_FIELD(android::widget::TableRow_::LayoutParams,1,"span","I")



android::widget::TableRow::operator local_ref<android::widget::LinearLayout>() const
{
	return local_ref<android::widget::LinearLayout>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::TableRow::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::TableRow::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::TableRow::TableRow(local_ref< android::content::Context > const &a0)
: object<android::widget::TableRow>(
	call_new_object<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(0),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::TableRow::TableRow(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::TableRow>(
	call_new_object<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(1),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void android::widget::TableRow::setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener > const &a0)
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(2),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}



local_ref< android::view::View > android::widget::TableRow::getVirtualChildAt(jint a0)
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(5),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::view::View >
	>(get_jobject(), a0);
}

jint android::widget::TableRow::getVirtualChildCount()
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(6),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< android::widget::TableRow_::LayoutParams > android::widget::TableRow::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(7),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::widget::TableRow_::LayoutParams >
	>(get_jobject(), a0);
}




local_ref< android::widget::LinearLayout_::LayoutParams > android::widget::TableRow::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(11),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::widget::LinearLayout_::LayoutParams >
	>(get_jobject(), a0);
}



local_ref< android::view::ViewGroup_::LayoutParams > android::widget::TableRow::generateLayoutParams_2(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::TableRow::J2CPP_CLASS_NAME,
		android::widget::TableRow::J2CPP_METHOD_NAME(14),
		android::widget::TableRow::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::ViewGroup_::LayoutParams >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::TableRow,"android/widget/TableRow")
J2CPP_DEFINE_METHOD(android::widget::TableRow,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow,2,"setOnHierarchyChangeListener","(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow,3,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow,4,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::TableRow,5,"getVirtualChildAt","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,6,"getVirtualChildCount","()I")
J2CPP_DEFINE_METHOD(android::widget::TableRow,7,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,8,"generateDefaultLayoutParams","()Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,9,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::TableRow,10,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,11,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,12,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,13,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableRow,14,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABLEROW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
