/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.CheckedTextView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class Checkable; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/Checkable.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CheckedTextView;
	class CheckedTextView
		: public object<CheckedTextView>
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

		explicit CheckedTextView(jobject jobj)
		: object<CheckedTextView>(jobj)
		{
		}

		operator local_ref<android::widget::TextView>() const;
		operator local_ref<android::widget::Checkable>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		CheckedTextView(local_ref< android::content::Context > const&);
		CheckedTextView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		CheckedTextView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void toggle();
		jboolean isChecked();
		void setChecked(jboolean);
		void setCheckMarkDrawable(jint);
		void setCheckMarkDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setPadding(jint, jint, jint, jint);
		jboolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
	}; //class CheckedTextView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL

namespace j2cpp {



android::widget::CheckedTextView::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<android::widget::Checkable>() const
{
	return local_ref<android::widget::Checkable>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::CheckedTextView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::CheckedTextView::CheckedTextView(local_ref< android::content::Context > const &a0)
: object<android::widget::CheckedTextView>(
	call_new_object<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(0),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::CheckedTextView::CheckedTextView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::CheckedTextView>(
	call_new_object<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(1),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::CheckedTextView::CheckedTextView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::CheckedTextView>(
	call_new_object<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(2),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::CheckedTextView::toggle()
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(3),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean android::widget::CheckedTextView::isChecked()
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(4),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

void android::widget::CheckedTextView::setChecked(jboolean a0)
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(5),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(jint a0)
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(6),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(7),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::widget::CheckedTextView::setPadding(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(8),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}




jboolean android::widget::CheckedTextView::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::widget::CheckedTextView::J2CPP_CLASS_NAME,
		android::widget::CheckedTextView::J2CPP_METHOD_NAME(12),
		android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::CheckedTextView,"android/widget/CheckedTextView")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,3,"toggle","()V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,4,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,5,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,6,"setCheckMarkDrawable","(I)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,7,"setCheckMarkDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,8,"setPadding","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,9,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,10,"onCreateDrawableState","(I)[I")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,11,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,12,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
