/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.DoubleBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/ByteOrder.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class DoubleBuffer;
	class DoubleBuffer
		: public object<DoubleBuffer>
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
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)

		explicit DoubleBuffer(jobject jobj)
		: object<DoubleBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::Buffer>() const;


		static local_ref< java::nio::DoubleBuffer > allocate(jint);
		static local_ref< java::nio::DoubleBuffer > wrap(local_ref< array<jdouble,1> >  const&);
		static local_ref< java::nio::DoubleBuffer > wrap(local_ref< array<jdouble,1> >  const&, jint, jint);
		local_ref< array<jdouble,1> > array_();
		jint arrayOffset();
		local_ref< java::nio::DoubleBuffer > asReadOnlyBuffer();
		local_ref< java::nio::DoubleBuffer > compact();
		jint compareTo(local_ref< java::nio::DoubleBuffer >  const&);
		local_ref< java::nio::DoubleBuffer > duplicate();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jdouble get();
		local_ref< java::nio::DoubleBuffer > get(local_ref< array<jdouble,1> >  const&);
		local_ref< java::nio::DoubleBuffer > get(local_ref< array<jdouble,1> >  const&, jint, jint);
		jdouble get(jint);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::DoubleBuffer > put(jdouble);
		local_ref< java::nio::DoubleBuffer > put(local_ref< array<jdouble,1> >  const&);
		local_ref< java::nio::DoubleBuffer > put(local_ref< array<jdouble,1> >  const&, jint, jint);
		local_ref< java::nio::DoubleBuffer > put(local_ref< java::nio::DoubleBuffer >  const&);
		local_ref< java::nio::DoubleBuffer > put(jint, jdouble);
		local_ref< java::nio::DoubleBuffer > slice();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > array_1();
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class DoubleBuffer

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_IMPL

namespace j2cpp {



java::nio::DoubleBuffer::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::nio::DoubleBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::DoubleBuffer::operator local_ref<java::nio::Buffer>() const
{
	return local_ref<java::nio::Buffer>(get_jobject());
}


local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::allocate(jint a0)
{
	return call_static_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(1),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::DoubleBuffer >
	>(a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::wrap(local_ref< array<jdouble,1> > const &a0)
{
	return call_static_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(2),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::DoubleBuffer >
	>(a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::wrap(local_ref< array<jdouble,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(3),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::DoubleBuffer >
	>(a0, a1, a2);
}

local_ref< array<jdouble,1> > java::nio::DoubleBuffer::array_()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(4),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jdouble,1> >
	>(get_jobject());
}

jint java::nio::DoubleBuffer::arrayOffset()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(5),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::asReadOnlyBuffer()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(6),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject());
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::compact()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(7),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject());
}

jint java::nio::DoubleBuffer::compareTo(local_ref< java::nio::DoubleBuffer > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(8),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::duplicate()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(9),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject());
}

jboolean java::nio::DoubleBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(10),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jdouble java::nio::DoubleBuffer::get()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(11),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(11), 
		jdouble
	>(get_jobject());
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::get(local_ref< array<jdouble,1> > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(12),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::get(local_ref< array<jdouble,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(13),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0, a1, a2);
}

jdouble java::nio::DoubleBuffer::get(jint a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(14),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(14), 
		jdouble
	>(get_jobject(), a0);
}

jboolean java::nio::DoubleBuffer::hasArray()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(15),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

jint java::nio::DoubleBuffer::hashCode()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(16),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

jboolean java::nio::DoubleBuffer::isDirect()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(17),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

local_ref< java::nio::ByteOrder > java::nio::DoubleBuffer::order()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(18),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::nio::ByteOrder >
	>(get_jobject());
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::put(jdouble a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(19),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::put(local_ref< array<jdouble,1> > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(20),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::put(local_ref< array<jdouble,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(21),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::put(local_ref< java::nio::DoubleBuffer > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(22),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::put(jint a0, jdouble a1)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(23),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject(), a0, a1);
}

local_ref< java::nio::DoubleBuffer > java::nio::DoubleBuffer::slice()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(24),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::nio::DoubleBuffer >
	>(get_jobject());
}

local_ref< java::lang::String > java::nio::DoubleBuffer::toString()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(25),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > java::nio::DoubleBuffer::array_1()
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(26),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::nio::DoubleBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::DoubleBuffer::J2CPP_CLASS_NAME,
		java::nio::DoubleBuffer::J2CPP_METHOD_NAME(27),
		java::nio::DoubleBuffer::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::DoubleBuffer,"java/nio/DoubleBuffer")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,1,"allocate","(I)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,2,"wrap","([D)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,3,"wrap","([DII)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,4,"array","()[D")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,5,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,6,"asReadOnlyBuffer","()Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,7,"compact","()Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,8,"compareTo","(Ljava/nio/DoubleBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,9,"duplicate","()Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,11,"get","()D")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,12,"get","([D)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,13,"get","([DII)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,14,"get","(I)D")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,15,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,17,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,18,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,19,"put","(D)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,20,"put","([D)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,21,"put","([DII)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,22,"put","(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,23,"put","(ID)Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,24,"slice","()Ljava/nio/DoubleBuffer;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,26,"array","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::nio::DoubleBuffer,27,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_DOUBLEBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
