%module(directors="1") otapi

// included in the cpp file.
%{
#include <string>
#include <map>
#define IMPORT
#include "../../include/otlib/OTAsymmetricKey.h"
#include "../../include/otapi/OTAPI_Basic.h"
#include "../../include/otlib/OTStorage.h"
%}


%include "std_string.i";
%include "typemaps.i"


%feature("director") OTCallback;

%ignore OTPasswordData;
%rename(opAssign) OTPassword::operator=;
%include "../../include/otlib/OTPassword.h"


%ignore StoredObjectTypeStrings;
%ignore details;
%ignore clone;


/* Parse the header file to generate wrappers */

%include "../../include/otapi/OTAPI_Basic.h"
%define NO_PACKED_BUFFER;
%enddef
%define NO_STORAGE_FS;
%enddef
%define NO_INIT_OTDB;
%enddef



 // NOTE: these are supposed to be here, so that the Java garbage collector
 // can clean up any memory it's finished with (from OT.)
 //
 // SWIG people: PLEASE update your documentation a bit. I've had to figure out
 // this crap through trial-and-error. I thought SWIG was supposed to make things easier?
 // If newobject is support, then delobject should be supported to. Especially for JAVA,
 // of all languages!! Also, if I have the custom code handlers for Java, Python, etc then
 // why have SWIG at all?
 
%newobject CreateObject(StoredObjectType eType);
%newobject QueryObject(StoredObjectType theObjectType, std::string strFolder, std::string oneStr="", std::string twoStr="", std::string threeStr="");
%newobject DecodeObject(StoredObjectType theObjectType, std::string strInput);
%newobject Storage::QueryObject(StoredObjectType theObjectType, std::string strFolder, std::string oneStr="", std::string twoStr="", std::string threeStr="");
%newobject Storage::DecodeObject(StoredObjectType theObjectType, std::string strInput);
%newobject Storage::CreateObject(StoredObjectType eType);
%newobject CreateStorageContext(StorageType eStoreType, PackType ePackType=OTDB_DEFAULT_PACKER);


%include "../../include/otlib/OTStorage.h"
