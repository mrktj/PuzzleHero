/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.PhoneStateListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace telephony { class ServiceState; } } }
namespace j2cpp { namespace android { namespace telephony { class SignalStrength; } } }
namespace j2cpp { namespace android { namespace telephony { class CellLocation; } } }


#include <android/telephony/CellLocation.hpp>
#include <android/telephony/ServiceState.hpp>
#include <android/telephony/SignalStrength.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class PhoneStateListener;
	class PhoneStateListener
		: public object<PhoneStateListener>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit PhoneStateListener(jobject jobj)
		: object<PhoneStateListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PhoneStateListener();
		void onServiceStateChanged(local_ref< android::telephony::ServiceState >  const&);
		void onSignalStrengthChanged(jint);
		void onMessageWaitingIndicatorChanged(jboolean);
		void onCallForwardingIndicatorChanged(jboolean);
		void onCellLocationChanged(local_ref< android::telephony::CellLocation >  const&);
		void onCallStateChanged(jint, local_ref< java::lang::String >  const&);
		void onDataConnectionStateChanged(jint);
		void onDataConnectionStateChanged(jint, jint);
		void onDataActivity(jint);
		void onSignalStrengthsChanged(local_ref< android::telephony::SignalStrength >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > LISTEN_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > LISTEN_SERVICE_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > LISTEN_SIGNAL_STRENGTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > LISTEN_MESSAGE_WAITING_INDICATOR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > LISTEN_CALL_FORWARDING_INDICATOR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > LISTEN_CELL_LOCATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > LISTEN_CALL_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > LISTEN_DATA_CONNECTION_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > LISTEN_DATA_ACTIVITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > LISTEN_SIGNAL_STRENGTHS;
	}; //class PhoneStateListener

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_IMPL

namespace j2cpp {



android::telephony::PhoneStateListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::telephony::PhoneStateListener::PhoneStateListener()
: object<android::telephony::PhoneStateListener>(
	call_new_object<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(0),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::telephony::PhoneStateListener::onServiceStateChanged(local_ref< android::telephony::ServiceState > const &a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(1),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onSignalStrengthChanged(jint a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(2),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(3),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onCallForwardingIndicatorChanged(jboolean a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(4),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onCellLocationChanged(local_ref< android::telephony::CellLocation > const &a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(5),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onCallStateChanged(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(6),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void android::telephony::PhoneStateListener::onDataConnectionStateChanged(jint a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(7),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onDataConnectionStateChanged(jint a0, jint a1)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(8),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void android::telephony::PhoneStateListener::onDataActivity(jint a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(9),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneStateListener::onSignalStrengthsChanged(local_ref< android::telephony::SignalStrength > const &a0)
{
	return call_method<
		android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
		android::telephony::PhoneStateListener::J2CPP_METHOD_NAME(10),
		android::telephony::PhoneStateListener::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(0),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::telephony::PhoneStateListener::LISTEN_NONE;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(1),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::telephony::PhoneStateListener::LISTEN_SERVICE_STATE;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(2),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::telephony::PhoneStateListener::LISTEN_SIGNAL_STRENGTH;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(3),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::telephony::PhoneStateListener::LISTEN_MESSAGE_WAITING_INDICATOR;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(4),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::telephony::PhoneStateListener::LISTEN_CALL_FORWARDING_INDICATOR;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(5),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::telephony::PhoneStateListener::LISTEN_CELL_LOCATION;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(6),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::telephony::PhoneStateListener::LISTEN_CALL_STATE;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(7),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::telephony::PhoneStateListener::LISTEN_DATA_CONNECTION_STATE;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(8),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::telephony::PhoneStateListener::LISTEN_DATA_ACTIVITY;

static_field<
	android::telephony::PhoneStateListener::J2CPP_CLASS_NAME,
	android::telephony::PhoneStateListener::J2CPP_FIELD_NAME(9),
	android::telephony::PhoneStateListener::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::telephony::PhoneStateListener::LISTEN_SIGNAL_STRENGTHS;


J2CPP_DEFINE_CLASS(android::telephony::PhoneStateListener,"android/telephony/PhoneStateListener")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,1,"onServiceStateChanged","(Landroid/telephony/ServiceState;)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,2,"onSignalStrengthChanged","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,3,"onMessageWaitingIndicatorChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,4,"onCallForwardingIndicatorChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,5,"onCellLocationChanged","(Landroid/telephony/CellLocation;)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,6,"onCallStateChanged","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,7,"onDataConnectionStateChanged","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,8,"onDataConnectionStateChanged","(II)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,9,"onDataActivity","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneStateListener,10,"onSignalStrengthsChanged","(Landroid/telephony/SignalStrength;)V")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,0,"LISTEN_NONE","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,1,"LISTEN_SERVICE_STATE","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,2,"LISTEN_SIGNAL_STRENGTH","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,3,"LISTEN_MESSAGE_WAITING_INDICATOR","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,4,"LISTEN_CALL_FORWARDING_INDICATOR","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,5,"LISTEN_CELL_LOCATION","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,6,"LISTEN_CALL_STATE","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,7,"LISTEN_DATA_CONNECTION_STATE","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,8,"LISTEN_DATA_ACTIVITY","I")
J2CPP_DEFINE_FIELD(android::telephony::PhoneStateListener,9,"LISTEN_SIGNAL_STRENGTHS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONESTATELISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
