/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ActivityInstrumentationTestCase2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL
#define J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace test { class InstrumentationTestCase; } } }
namespace j2cpp { namespace android { namespace test { class ActivityTestCase; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/Activity.hpp>
#include <android/content/Intent.hpp>
#include <android/test/ActivityTestCase.hpp>
#include <android/test/InstrumentationTestCase.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ActivityInstrumentationTestCase2;
	class ActivityInstrumentationTestCase2
		: public object<ActivityInstrumentationTestCase2>
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

		explicit ActivityInstrumentationTestCase2(jobject jobj)
		: object<ActivityInstrumentationTestCase2>(jobj)
		{
		}

		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<android::test::InstrumentationTestCase>() const;
		operator local_ref<android::test::ActivityTestCase>() const;
		operator local_ref<java::lang::Object>() const;


		ActivityInstrumentationTestCase2(local_ref< java::lang::String > const&, local_ref< java::lang::Class > const&);
		ActivityInstrumentationTestCase2(local_ref< java::lang::Class > const&);
		local_ref< android::app::Activity > getActivity();
		void setActivityIntent(local_ref< android::content::Intent >  const&);
		void setActivityInitialTouchMode(jboolean);
	}; //class ActivityInstrumentationTestCase2

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL
#define J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL

namespace j2cpp {



android::test::ActivityInstrumentationTestCase2::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

android::test::ActivityInstrumentationTestCase2::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::ActivityInstrumentationTestCase2::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::ActivityInstrumentationTestCase2::operator local_ref<android::test::InstrumentationTestCase>() const
{
	return local_ref<android::test::InstrumentationTestCase>(get_jobject());
}

android::test::ActivityInstrumentationTestCase2::operator local_ref<android::test::ActivityTestCase>() const
{
	return local_ref<android::test::ActivityTestCase>(get_jobject());
}

android::test::ActivityInstrumentationTestCase2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::ActivityInstrumentationTestCase2::ActivityInstrumentationTestCase2(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
: object<android::test::ActivityInstrumentationTestCase2>(
	call_new_object<
		android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME,
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(0),
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::test::ActivityInstrumentationTestCase2::ActivityInstrumentationTestCase2(local_ref< java::lang::Class > const &a0)
: object<android::test::ActivityInstrumentationTestCase2>(
	call_new_object<
		android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME,
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(1),
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< android::app::Activity > android::test::ActivityInstrumentationTestCase2::getActivity()
{
	return call_method<
		android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME,
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(2),
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::app::Activity >
	>(get_jobject());
}

void android::test::ActivityInstrumentationTestCase2::setActivityIntent(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME,
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(3),
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::test::ActivityInstrumentationTestCase2::setActivityInitialTouchMode(jboolean a0)
{
	return call_method<
		android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME,
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(4),
		android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}





J2CPP_DEFINE_CLASS(android::test::ActivityInstrumentationTestCase2,"android/test/ActivityInstrumentationTestCase2")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,0,"<init>","(Ljava/lang/String;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,1,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,2,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,3,"setActivityIntent","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,4,"setActivityInitialTouchMode","(Z)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,5,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,6,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,7,"runTest","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
