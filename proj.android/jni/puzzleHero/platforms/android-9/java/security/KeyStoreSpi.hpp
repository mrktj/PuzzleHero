/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.KeyStoreSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { namespace KeyStore_ { class ProtectionParameter; } } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { namespace KeyStore_ { class Entry; } } } }
namespace j2cpp { namespace java { namespace security { namespace KeyStore_ { class LoadStoreParameter; } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Key.hpp>
#include <java/security/KeyStore.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/Date.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyStoreSpi;
	class KeyStoreSpi
		: public object<KeyStoreSpi>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)

		explicit KeyStoreSpi(jobject jobj)
		: object<KeyStoreSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		KeyStoreSpi();
		local_ref< java::security::Key > engineGetKey(local_ref< java::lang::String >  const&, local_ref< array<jchar,1> >  const&);
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > engineGetCertificateChain(local_ref< java::lang::String >  const&);
		local_ref< java::security::cert::Certificate > engineGetCertificate(local_ref< java::lang::String >  const&);
		local_ref< java::util::Date > engineGetCreationDate(local_ref< java::lang::String >  const&);
		void engineSetKeyEntry(local_ref< java::lang::String >  const&, local_ref< java::security::Key >  const&, local_ref< array<jchar,1> >  const&, local_ref< array< local_ref< java::security::cert::Certificate >, 1> >  const&);
		void engineSetKeyEntry(local_ref< java::lang::String >  const&, local_ref< array<jbyte,1> >  const&, local_ref< array< local_ref< java::security::cert::Certificate >, 1> >  const&);
		void engineSetCertificateEntry(local_ref< java::lang::String >  const&, local_ref< java::security::cert::Certificate >  const&);
		void engineDeleteEntry(local_ref< java::lang::String >  const&);
		local_ref< java::util::Enumeration > engineAliases();
		jboolean engineContainsAlias(local_ref< java::lang::String >  const&);
		jint engineSize();
		jboolean engineIsKeyEntry(local_ref< java::lang::String >  const&);
		jboolean engineIsCertificateEntry(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > engineGetCertificateAlias(local_ref< java::security::cert::Certificate >  const&);
		void engineStore(local_ref< java::io::OutputStream >  const&, local_ref< array<jchar,1> >  const&);
		void engineStore(local_ref< java::security::KeyStore_::LoadStoreParameter >  const&);
		void engineLoad(local_ref< java::io::InputStream >  const&, local_ref< array<jchar,1> >  const&);
		void engineLoad(local_ref< java::security::KeyStore_::LoadStoreParameter >  const&);
		local_ref< java::security::KeyStore_::Entry > engineGetEntry(local_ref< java::lang::String >  const&, local_ref< java::security::KeyStore_::ProtectionParameter >  const&);
		void engineSetEntry(local_ref< java::lang::String >  const&, local_ref< java::security::KeyStore_::Entry >  const&, local_ref< java::security::KeyStore_::ProtectionParameter >  const&);
		jboolean engineEntryInstanceOf(local_ref< java::lang::String >  const&, local_ref< java::lang::Class >  const&);
	}; //class KeyStoreSpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_IMPL

namespace j2cpp {



java::security::KeyStoreSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::KeyStoreSpi::KeyStoreSpi()
: object<java::security::KeyStoreSpi>(
	call_new_object<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(0),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::security::Key > java::security::KeyStoreSpi::engineGetKey(local_ref< java::lang::String > const &a0, local_ref< array<jchar,1> > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(1),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::Key >
	>(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > java::security::KeyStoreSpi::engineGetCertificateChain(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(2),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> >
	>(get_jobject(), a0);
}

local_ref< java::security::cert::Certificate > java::security::KeyStoreSpi::engineGetCertificate(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(3),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::cert::Certificate >
	>(get_jobject(), a0);
}

local_ref< java::util::Date > java::security::KeyStoreSpi::engineGetCreationDate(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(4),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Date >
	>(get_jobject(), a0);
}

void java::security::KeyStoreSpi::engineSetKeyEntry(local_ref< java::lang::String > const &a0, local_ref< java::security::Key > const &a1, local_ref< array<jchar,1> > const &a2, local_ref< array< local_ref< java::security::cert::Certificate >, 1> > const &a3)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(5),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void java::security::KeyStoreSpi::engineSetKeyEntry(local_ref< java::lang::String > const &a0, local_ref< array<jbyte,1> > const &a1, local_ref< array< local_ref< java::security::cert::Certificate >, 1> > const &a2)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(6),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::security::KeyStoreSpi::engineSetCertificateEntry(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::Certificate > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(7),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void java::security::KeyStoreSpi::engineDeleteEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(8),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::Enumeration > java::security::KeyStoreSpi::engineAliases()
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(9),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

jboolean java::security::KeyStoreSpi::engineContainsAlias(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(10),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jint java::security::KeyStoreSpi::engineSize()
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(11),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jboolean java::security::KeyStoreSpi::engineIsKeyEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(12),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::security::KeyStoreSpi::engineIsCertificateEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(13),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::KeyStoreSpi::engineGetCertificateAlias(local_ref< java::security::cert::Certificate > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(14),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void java::security::KeyStoreSpi::engineStore(local_ref< java::io::OutputStream > const &a0, local_ref< array<jchar,1> > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(15),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1);
}

void java::security::KeyStoreSpi::engineStore(local_ref< java::security::KeyStore_::LoadStoreParameter > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(16),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void java::security::KeyStoreSpi::engineLoad(local_ref< java::io::InputStream > const &a0, local_ref< array<jchar,1> > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(17),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1);
}

void java::security::KeyStoreSpi::engineLoad(local_ref< java::security::KeyStore_::LoadStoreParameter > const &a0)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(18),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

local_ref< java::security::KeyStore_::Entry > java::security::KeyStoreSpi::engineGetEntry(local_ref< java::lang::String > const &a0, local_ref< java::security::KeyStore_::ProtectionParameter > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(19),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::security::KeyStore_::Entry >
	>(get_jobject(), a0, a1);
}

void java::security::KeyStoreSpi::engineSetEntry(local_ref< java::lang::String > const &a0, local_ref< java::security::KeyStore_::Entry > const &a1, local_ref< java::security::KeyStore_::ProtectionParameter > const &a2)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(20),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1, a2);
}

jboolean java::security::KeyStoreSpi::engineEntryInstanceOf(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_method<
		java::security::KeyStoreSpi::J2CPP_CLASS_NAME,
		java::security::KeyStoreSpi::J2CPP_METHOD_NAME(21),
		java::security::KeyStoreSpi::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::KeyStoreSpi,"java/security/KeyStoreSpi")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,1,"engineGetKey","(Ljava/lang/String;[C)Ljava/security/Key;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,2,"engineGetCertificateChain","(Ljava/lang/String;)[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,3,"engineGetCertificate","(Ljava/lang/String;)Ljava/security/cert/Certificate;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,4,"engineGetCreationDate","(Ljava/lang/String;)Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,5,"engineSetKeyEntry","(Ljava/lang/String;Ljava/security/Key;[C[java.security.cert.Certificate)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,6,"engineSetKeyEntry","(Ljava/lang/String;[B[java.security.cert.Certificate)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,7,"engineSetCertificateEntry","(Ljava/lang/String;Ljava/security/cert/Certificate;)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,8,"engineDeleteEntry","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,9,"engineAliases","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,10,"engineContainsAlias","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,11,"engineSize","()I")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,12,"engineIsKeyEntry","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,13,"engineIsCertificateEntry","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,14,"engineGetCertificateAlias","(Ljava/security/cert/Certificate;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,15,"engineStore","(Ljava/io/OutputStream;[C)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,16,"engineStore","(Ljava/security/KeyStore$LoadStoreParameter;)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,17,"engineLoad","(Ljava/io/InputStream;[C)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,18,"engineLoad","(Ljava/security/KeyStore$LoadStoreParameter;)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,19,"engineGetEntry","(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,20,"engineSetEntry","(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V")
J2CPP_DEFINE_METHOD(java::security::KeyStoreSpi,21,"engineEntryInstanceOf","(Ljava/lang/String;Ljava/lang/Class;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYSTORESPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
