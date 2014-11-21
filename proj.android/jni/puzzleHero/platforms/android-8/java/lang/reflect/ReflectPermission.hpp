/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.ReflectPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class BasicPermission; } } }
namespace j2cpp { namespace java { namespace security { class Guard; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/BasicPermission.hpp>
#include <java/security/Guard.hpp>
#include <java/security/Permission.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class ReflectPermission;
	class ReflectPermission
		: public object<ReflectPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ReflectPermission(jobject jobj)
		: object<ReflectPermission>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::Permission>() const;
		operator local_ref<java::security::BasicPermission>() const;
		operator local_ref<java::security::Guard>() const;
		operator local_ref<java::io::Serializable>() const;


		ReflectPermission(local_ref< java::lang::String > const&);
		ReflectPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class ReflectPermission

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_IMPL

namespace j2cpp {



java::lang::reflect::ReflectPermission::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::reflect::ReflectPermission::operator local_ref<java::security::Permission>() const
{
	return local_ref<java::security::Permission>(get_jobject());
}

java::lang::reflect::ReflectPermission::operator local_ref<java::security::BasicPermission>() const
{
	return local_ref<java::security::BasicPermission>(get_jobject());
}

java::lang::reflect::ReflectPermission::operator local_ref<java::security::Guard>() const
{
	return local_ref<java::security::Guard>(get_jobject());
}

java::lang::reflect::ReflectPermission::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::reflect::ReflectPermission::ReflectPermission(local_ref< java::lang::String > const &a0)
: object<java::lang::reflect::ReflectPermission>(
	call_new_object<
		java::lang::reflect::ReflectPermission::J2CPP_CLASS_NAME,
		java::lang::reflect::ReflectPermission::J2CPP_METHOD_NAME(0),
		java::lang::reflect::ReflectPermission::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::lang::reflect::ReflectPermission::ReflectPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::lang::reflect::ReflectPermission>(
	call_new_object<
		java::lang::reflect::ReflectPermission::J2CPP_CLASS_NAME,
		java::lang::reflect::ReflectPermission::J2CPP_METHOD_NAME(1),
		java::lang::reflect::ReflectPermission::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::reflect::ReflectPermission,"java/lang/reflect/ReflectPermission")
J2CPP_DEFINE_METHOD(java::lang::reflect::ReflectPermission,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::ReflectPermission,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_REFLECTPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
