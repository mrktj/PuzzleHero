/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.GestureDetector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { namespace GestureDetector_ { class OnDoubleTapListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace GestureDetector_ { class OnGestureListener; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/content/Context.hpp>
#include <android/os/Handler.hpp>
#include <android/view/GestureDetector.hpp>
#include <android/view/MotionEvent.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class GestureDetector;
	namespace GestureDetector_ {

		class OnDoubleTapListener;
		class OnDoubleTapListener
			: public object<OnDoubleTapListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit OnDoubleTapListener(jobject jobj)
			: object<OnDoubleTapListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onSingleTapConfirmed(local_ref< android::view::MotionEvent >  const&);
			jboolean onDoubleTap(local_ref< android::view::MotionEvent >  const&);
			jboolean onDoubleTapEvent(local_ref< android::view::MotionEvent >  const&);
		}; //class OnDoubleTapListener

		class OnGestureListener;
		class OnGestureListener
			: public object<OnGestureListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)

			explicit OnGestureListener(jobject jobj)
			: object<OnGestureListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onDown(local_ref< android::view::MotionEvent >  const&);
			void onShowPress(local_ref< android::view::MotionEvent >  const&);
			jboolean onSingleTapUp(local_ref< android::view::MotionEvent >  const&);
			jboolean onScroll(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
			void onLongPress(local_ref< android::view::MotionEvent >  const&);
			jboolean onFling(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
		}; //class OnGestureListener

		class SimpleOnGestureListener;
		class SimpleOnGestureListener
			: public object<SimpleOnGestureListener>
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

			explicit SimpleOnGestureListener(jobject jobj)
			: object<SimpleOnGestureListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::view::GestureDetector_::OnDoubleTapListener>() const;
			operator local_ref<android::view::GestureDetector_::OnGestureListener>() const;


			SimpleOnGestureListener();
			jboolean onSingleTapUp(local_ref< android::view::MotionEvent >  const&);
			void onLongPress(local_ref< android::view::MotionEvent >  const&);
			jboolean onScroll(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
			jboolean onFling(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
			void onShowPress(local_ref< android::view::MotionEvent >  const&);
			jboolean onDown(local_ref< android::view::MotionEvent >  const&);
			jboolean onDoubleTap(local_ref< android::view::MotionEvent >  const&);
			jboolean onDoubleTapEvent(local_ref< android::view::MotionEvent >  const&);
			jboolean onSingleTapConfirmed(local_ref< android::view::MotionEvent >  const&);
		}; //class SimpleOnGestureListener

	} //namespace GestureDetector_

	class GestureDetector
		: public object<GestureDetector>
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

		typedef GestureDetector_::OnDoubleTapListener OnDoubleTapListener;
		typedef GestureDetector_::OnGestureListener OnGestureListener;
		typedef GestureDetector_::SimpleOnGestureListener SimpleOnGestureListener;

		explicit GestureDetector(jobject jobj)
		: object<GestureDetector>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GestureDetector(local_ref< android::view::GestureDetector_::OnGestureListener > const&, local_ref< android::os::Handler > const&);
		GestureDetector(local_ref< android::view::GestureDetector_::OnGestureListener > const&);
		GestureDetector(local_ref< android::content::Context > const&, local_ref< android::view::GestureDetector_::OnGestureListener > const&);
		GestureDetector(local_ref< android::content::Context > const&, local_ref< android::view::GestureDetector_::OnGestureListener > const&, local_ref< android::os::Handler > const&);
		GestureDetector(local_ref< android::content::Context > const&, local_ref< android::view::GestureDetector_::OnGestureListener > const&, local_ref< android::os::Handler > const&, jboolean);
		void setOnDoubleTapListener(local_ref< android::view::GestureDetector_::OnDoubleTapListener >  const&);
		void setIsLongpressEnabled(jboolean);
		jboolean isLongpressEnabled();
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
	}; //class GestureDetector

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_IMPL

namespace j2cpp {




android::view::GestureDetector_::OnDoubleTapListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::GestureDetector_::OnDoubleTapListener::onSingleTapConfirmed(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_NAME(0),
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::OnDoubleTapListener::onDoubleTap(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_NAME(1),
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::OnDoubleTapListener::onDoubleTapEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_NAME(2),
		android::view::GestureDetector_::OnDoubleTapListener::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::GestureDetector_::OnDoubleTapListener,"android/view/GestureDetector$OnDoubleTapListener")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnDoubleTapListener,0,"onSingleTapConfirmed","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnDoubleTapListener,1,"onDoubleTap","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnDoubleTapListener,2,"onDoubleTapEvent","(Landroid/view/MotionEvent;)Z")


android::view::GestureDetector_::OnGestureListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::view::GestureDetector_::OnGestureListener::onDown(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(0),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

void android::view::GestureDetector_::OnGestureListener::onShowPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(1),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::OnGestureListener::onSingleTapUp(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(2),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::OnGestureListener::onScroll(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(3),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void android::view::GestureDetector_::OnGestureListener::onLongPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(4),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::OnGestureListener::onFling(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::view::GestureDetector_::OnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_NAME(5),
		android::view::GestureDetector_::OnGestureListener::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::view::GestureDetector_::OnGestureListener,"android/view/GestureDetector$OnGestureListener")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,0,"onDown","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,1,"onShowPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,2,"onSingleTapUp","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,3,"onScroll","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,4,"onLongPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::OnGestureListener,5,"onFling","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")


android::view::GestureDetector_::SimpleOnGestureListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::GestureDetector_::SimpleOnGestureListener::operator local_ref<android::view::GestureDetector_::OnDoubleTapListener>() const
{
	return local_ref<android::view::GestureDetector_::OnDoubleTapListener>(get_jobject());
}

android::view::GestureDetector_::SimpleOnGestureListener::operator local_ref<android::view::GestureDetector_::OnGestureListener>() const
{
	return local_ref<android::view::GestureDetector_::OnGestureListener>(get_jobject());
}


android::view::GestureDetector_::SimpleOnGestureListener::SimpleOnGestureListener()
: object<android::view::GestureDetector_::SimpleOnGestureListener>(
	call_new_object<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(0),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::view::GestureDetector_::SimpleOnGestureListener::onSingleTapUp(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(1),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

void android::view::GestureDetector_::SimpleOnGestureListener::onLongPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(2),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onScroll(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(3),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onFling(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(4),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void android::view::GestureDetector_::SimpleOnGestureListener::onShowPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(5),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onDown(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(6),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onDoubleTap(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(7),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onDoubleTapEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(8),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector_::SimpleOnGestureListener::onSingleTapConfirmed(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_CLASS_NAME,
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_NAME(9),
		android::view::GestureDetector_::SimpleOnGestureListener::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::GestureDetector_::SimpleOnGestureListener,"android/view/GestureDetector$SimpleOnGestureListener")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,1,"onSingleTapUp","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,2,"onLongPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,3,"onScroll","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,4,"onFling","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,5,"onShowPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,6,"onDown","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,7,"onDoubleTap","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,8,"onDoubleTapEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector_::SimpleOnGestureListener,9,"onSingleTapConfirmed","(Landroid/view/MotionEvent;)Z")



android::view::GestureDetector::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::GestureDetector::GestureDetector(local_ref< android::view::GestureDetector_::OnGestureListener > const &a0, local_ref< android::os::Handler > const &a1)
: object<android::view::GestureDetector>(
	call_new_object<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(0),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::view::GestureDetector::GestureDetector(local_ref< android::view::GestureDetector_::OnGestureListener > const &a0)
: object<android::view::GestureDetector>(
	call_new_object<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(1),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



android::view::GestureDetector::GestureDetector(local_ref< android::content::Context > const &a0, local_ref< android::view::GestureDetector_::OnGestureListener > const &a1)
: object<android::view::GestureDetector>(
	call_new_object<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(2),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



android::view::GestureDetector::GestureDetector(local_ref< android::content::Context > const &a0, local_ref< android::view::GestureDetector_::OnGestureListener > const &a1, local_ref< android::os::Handler > const &a2)
: object<android::view::GestureDetector>(
	call_new_object<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(3),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2)
)
{
}



android::view::GestureDetector::GestureDetector(local_ref< android::content::Context > const &a0, local_ref< android::view::GestureDetector_::OnGestureListener > const &a1, local_ref< android::os::Handler > const &a2, jboolean a3)
: object<android::view::GestureDetector>(
	call_new_object<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(4),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1, a2, a3)
)
{
}


void android::view::GestureDetector::setOnDoubleTapListener(local_ref< android::view::GestureDetector_::OnDoubleTapListener > const &a0)
{
	return call_method<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(5),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::view::GestureDetector::setIsLongpressEnabled(jboolean a0)
{
	return call_method<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(6),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jboolean android::view::GestureDetector::isLongpressEnabled()
{
	return call_method<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(7),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean android::view::GestureDetector::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::GestureDetector::J2CPP_CLASS_NAME,
		android::view::GestureDetector::J2CPP_METHOD_NAME(8),
		android::view::GestureDetector::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::GestureDetector,"android/view/GestureDetector")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,0,"<init>","(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,1,"<init>","(Landroid/view/GestureDetector$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,2,"<init>","(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,3,"<init>","(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,4,"<init>","(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,5,"setOnDoubleTapListener","(Landroid/view/GestureDetector$OnDoubleTapListener;)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,6,"setIsLongpressEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,7,"isLongpressEnabled","()Z")
J2CPP_DEFINE_METHOD(android::view::GestureDetector,8,"onTouchEvent","(Landroid/view/MotionEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_GESTUREDETECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
