/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteStatement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteProgram; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteClosable; } } } }


#include <android/database/sqlite/SQLiteClosable.hpp>
#include <android/database/sqlite/SQLiteProgram.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteStatement;
	class SQLiteStatement
		: public object<SQLiteStatement>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SQLiteStatement(jobject jobj)
		: object<SQLiteStatement>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::sqlite::SQLiteProgram>() const;
		operator local_ref<android::database::sqlite::SQLiteClosable>() const;


		void execute();
		jlong executeInsert();
		jlong simpleQueryForLong();
		local_ref< java::lang::String > simpleQueryForString();
	}; //class SQLiteStatement

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteStatement::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::sqlite::SQLiteStatement::operator local_ref<android::database::sqlite::SQLiteProgram>() const
{
	return local_ref<android::database::sqlite::SQLiteProgram>(get_jobject());
}

android::database::sqlite::SQLiteStatement::operator local_ref<android::database::sqlite::SQLiteClosable>() const
{
	return local_ref<android::database::sqlite::SQLiteClosable>(get_jobject());
}


void android::database::sqlite::SQLiteStatement::execute()
{
	return call_method<
		android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

jlong android::database::sqlite::SQLiteStatement::executeInsert()
{
	return call_method<
		android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_SIGNATURE(2), 
		jlong
	>(get_jobject());
}

jlong android::database::sqlite::SQLiteStatement::simpleQueryForLong()
{
	return call_method<
		android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_NAME(3),
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

local_ref< java::lang::String > android::database::sqlite::SQLiteStatement::simpleQueryForString()
{
	return call_method<
		android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_NAME(4),
		android::database::sqlite::SQLiteStatement::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteStatement,"android/database/sqlite/SQLiteStatement")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,1,"execute","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,2,"executeInsert","()J")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,3,"simpleQueryForLong","()J")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,4,"simpleQueryForString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
