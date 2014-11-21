/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.audiofx.Virtualizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace media { namespace audiofx { namespace Virtualizer_ { class Settings; } } } } }
namespace j2cpp { namespace android { namespace media { namespace audiofx { class AudioEffect; } } } }
namespace j2cpp { namespace android { namespace media { namespace audiofx { namespace Virtualizer_ { class OnParameterChangeListener; } } } } }


#include <android/media/audiofx/AudioEffect.hpp>
#include <android/media/audiofx/Virtualizer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media { namespace audiofx {

	class Virtualizer;
	namespace Virtualizer_ {

		class Settings;
		class Settings
			: public object<Settings>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit Settings(jobject jobj)
			: object<Settings>(jobj)
			, strength(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Settings();
			Settings(local_ref< java::lang::String > const&);
			local_ref< java::lang::String > toString();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jshort > strength;
		}; //class Settings

		class OnParameterChangeListener;
		class OnParameterChangeListener
			: public object<OnParameterChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnParameterChangeListener(jobject jobj)
			: object<OnParameterChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onParameterChange(local_ref< android::media::audiofx::Virtualizer >  const&, jint, jint, jshort);
		}; //class OnParameterChangeListener

	} //namespace Virtualizer_

	class Virtualizer
		: public object<Virtualizer>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef Virtualizer_::Settings Settings;
		typedef Virtualizer_::OnParameterChangeListener OnParameterChangeListener;

		explicit Virtualizer(jobject jobj)
		: object<Virtualizer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::media::audiofx::AudioEffect>() const;


		Virtualizer(jint, jint);
		jboolean getStrengthSupported();
		void setStrength(jshort);
		jshort getRoundedStrength();
		void setParameterListener(local_ref< android::media::audiofx::Virtualizer_::OnParameterChangeListener >  const&);
		local_ref< android::media::audiofx::Virtualizer_::Settings > getProperties();
		void setProperties(local_ref< android::media::audiofx::Virtualizer_::Settings >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > PARAM_STRENGTH_SUPPORTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > PARAM_STRENGTH;
	}; //class Virtualizer

} //namespace audiofx
} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_IMPL

namespace j2cpp {




android::media::audiofx::Virtualizer_::Settings::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::audiofx::Virtualizer_::Settings::Settings()
: object<android::media::audiofx::Virtualizer_::Settings>(
	call_new_object<
		android::media::audiofx::Virtualizer_::Settings::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_NAME(0),
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, strength(get_jobject())
{
}



android::media::audiofx::Virtualizer_::Settings::Settings(local_ref< java::lang::String > const &a0)
: object<android::media::audiofx::Virtualizer_::Settings>(
	call_new_object<
		android::media::audiofx::Virtualizer_::Settings::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_NAME(1),
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, strength(get_jobject())
{
}


local_ref< java::lang::String > android::media::audiofx::Virtualizer_::Settings::toString()
{
	return call_method<
		android::media::audiofx::Virtualizer_::Settings::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_NAME(2),
		android::media::audiofx::Virtualizer_::Settings::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::media::audiofx::Virtualizer_::Settings,"android/media/audiofx/Virtualizer$Settings")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer_::Settings,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer_::Settings,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer_::Settings,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::audiofx::Virtualizer_::Settings,0,"strength","S")


android::media::audiofx::Virtualizer_::OnParameterChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::audiofx::Virtualizer_::OnParameterChangeListener::onParameterChange(local_ref< android::media::audiofx::Virtualizer > const &a0, jint a1, jint a2, jshort a3)
{
	return call_method<
		android::media::audiofx::Virtualizer_::OnParameterChangeListener::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer_::OnParameterChangeListener::J2CPP_METHOD_NAME(0),
		android::media::audiofx::Virtualizer_::OnParameterChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::media::audiofx::Virtualizer_::OnParameterChangeListener,"android/media/audiofx/Virtualizer$OnParameterChangeListener")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer_::OnParameterChangeListener,0,"onParameterChange","(Landroid/media/audiofx/Virtualizer;IIS)V")



android::media::audiofx::Virtualizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::media::audiofx::Virtualizer::operator local_ref<android::media::audiofx::AudioEffect>() const
{
	return local_ref<android::media::audiofx::AudioEffect>(get_jobject());
}


android::media::audiofx::Virtualizer::Virtualizer(jint a0, jint a1)
: object<android::media::audiofx::Virtualizer>(
	call_new_object<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(0),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


jboolean android::media::audiofx::Virtualizer::getStrengthSupported()
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(1),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void android::media::audiofx::Virtualizer::setStrength(jshort a0)
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(2),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jshort android::media::audiofx::Virtualizer::getRoundedStrength()
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(3),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(3), 
		jshort
	>(get_jobject());
}

void android::media::audiofx::Virtualizer::setParameterListener(local_ref< android::media::audiofx::Virtualizer_::OnParameterChangeListener > const &a0)
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(4),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< android::media::audiofx::Virtualizer_::Settings > android::media::audiofx::Virtualizer::getProperties()
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(5),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::media::audiofx::Virtualizer_::Settings >
	>(get_jobject());
}

void android::media::audiofx::Virtualizer::setProperties(local_ref< android::media::audiofx::Virtualizer_::Settings > const &a0)
{
	return call_method<
		android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
		android::media::audiofx::Virtualizer::J2CPP_METHOD_NAME(6),
		android::media::audiofx::Virtualizer::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
	android::media::audiofx::Virtualizer::J2CPP_FIELD_NAME(0),
	android::media::audiofx::Virtualizer::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::audiofx::Virtualizer::PARAM_STRENGTH_SUPPORTED;

static_field<
	android::media::audiofx::Virtualizer::J2CPP_CLASS_NAME,
	android::media::audiofx::Virtualizer::J2CPP_FIELD_NAME(1),
	android::media::audiofx::Virtualizer::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::audiofx::Virtualizer::PARAM_STRENGTH;


J2CPP_DEFINE_CLASS(android::media::audiofx::Virtualizer,"android/media/audiofx/Virtualizer")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,0,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,1,"getStrengthSupported","()Z")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,2,"setStrength","(S)V")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,3,"getRoundedStrength","()S")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,4,"setParameterListener","(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,5,"getProperties","()Landroid/media/audiofx/Virtualizer$Settings;")
J2CPP_DEFINE_METHOD(android::media::audiofx::Virtualizer,6,"setProperties","(Landroid/media/audiofx/Virtualizer$Settings;)V")
J2CPP_DEFINE_FIELD(android::media::audiofx::Virtualizer,0,"PARAM_STRENGTH_SUPPORTED","I")
J2CPP_DEFINE_FIELD(android::media::audiofx::Virtualizer,1,"PARAM_STRENGTH","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
