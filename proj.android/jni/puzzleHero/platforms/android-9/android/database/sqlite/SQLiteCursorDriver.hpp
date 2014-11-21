/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteCursorDriver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { namespace SQLiteDatabase_ { class CursorFactory; } } } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }


#include <android/database/Cursor.hpp>
#include <android/database/sqlite/SQLiteDatabase.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteCursorDriver;
	class SQLiteCursorDriver
		: public object<SQLiteCursorDriver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SQLiteCursorDriver(jobject jobj)
		: object<SQLiteCursorDriver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::database::Cursor > query(local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		void cursorDeactivated();
		void cursorRequeried(local_ref< android::database::Cursor >  const&);
		void cursorClosed();
		void setBindArguments(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
	}; //class SQLiteCursorDriver

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteCursorDriver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::database::Cursor > android::database::sqlite::SQLiteCursorDriver::query(local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		android::database::sqlite::SQLiteCursorDriver::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1);
}

void android::database::sqlite::SQLiteCursorDriver::cursorDeactivated()
{
	return call_method<
		android::database::sqlite::SQLiteCursorDriver::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void android::database::sqlite::SQLiteCursorDriver::cursorRequeried(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursorDriver::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteCursorDriver::cursorClosed()
{
	return call_method<
		android::database::sqlite::SQLiteCursorDriver::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_NAME(3),
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void android::database::sqlite::SQLiteCursorDriver::setBindArguments(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursorDriver::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_NAME(4),
		android::database::sqlite::SQLiteCursorDriver::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteCursorDriver,"android/database/sqlite/SQLiteCursorDriver")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursorDriver,0,"query","(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;[java.lang.String)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursorDriver,1,"cursorDeactivated","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursorDriver,2,"cursorRequeried","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursorDriver,3,"cursorClosed","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursorDriver,4,"setBindArguments","([java.lang.String)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSORDRIVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
