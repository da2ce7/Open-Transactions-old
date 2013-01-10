@ECHO OFF
:: A batch file that generates and renames intop swig
:: files for connecting OT to other langurages.
ECHO.

set START_DIR="%cd%"

cd /D %~dp0

Set SWIG_DIR=swigwin-2.0.9

set SWIG_PATH=..\..\%SWIG_DIR%\swig.exe


ECHO Checking if %SWIG_PATH% exist: 
IF NOT EXIST %SWIG_PATH% (
	ECHO cannot find %SWIG_DIR%...
	GOTO END
)

ECHO.
ECHO swigwin-2.0.9 exits! Good :)
ECHO.
ECHO.

FOR %%x IN (csharp java perl5 php python ruby tcl d) DO (

ECHO.
ECHO Generating for %%x ...


RMDIR /S /Q "glue\%%x"
MKDIR "glue\%%x"

IF EXIST otapi\OTAPI_wrap.cxx      DEL                              otapi\OTAPI_wrap.cxx
IF EXIST otapi\OTAPI_wrap.cpp      DEL                              otapi\OTAPI_wrap.cpp
IF EXIST otapi\OTAPI_wrap.h        DEL                              otapi\OTAPI_wrap.h


IF NOT %%x == java (
	ECHO %SWIG_PATH% -c++ -%%x -outdir glue\%%x otapi\OTAPI.i
	%SWIG_PATH% -c++ -%%x -outdir glue\%%x otapi\OTAPI.i
)

IF %%x == java (
	ECHO %SWIG_PATH% -c++ -%%x -package org.opentransactions.jni.core -outdir glue\%%x otapi\otapi.i
	 %SWIG_PATH% -c++ -%%x -package org.opentransactions.jni.core -outdir glue\%%x otapi\otapi.i
)


IF EXIST otapi\OTAPI-%%x.cxx     DEL                              otapi\OTAPI-%%x.cxx
IF EXIST otapi\OTAPI_wrap.cxx    SED -i s/"OTAPI_wrap.h"/"OTAPI-%%x.h"/g "otapi\OTAPI_wrap.cxx"
IF EXIST otapi\OTAPI_wrap.cxx    SED -i s/"otapi_wrap.h"/"OTAPI-%%x.h"/g "otapi\OTAPI_wrap.cxx"
IF EXIST otapi\OTAPI_wrap.cxx    MOVE /Y   otapi\OTAPI_wrap.cxx   otapi\OTAPI-%%x.cxx
IF EXIST otapi\OTAPI-%%x.cpp     DEL                              otapi\OTAPI-%%x.cpp
IF EXIST otapi\OTAPI_wrap.cpp    SED -i s/"OTAPI_wrap.h"/"OTAPI-%%x.h"/g "otapi\OTAPI_wrap.cpp"
IF EXIST otapi\OTAPI_wrap.cpp    SED -i s/"otapi_wrap.h"/"OTAPI-%%x.h"/g "otapi\OTAPI_wrap.cpp"
IF EXIST otapi\OTAPI_wrap.cpp    MOVE /Y   otapi\OTAPI_wrap.cpp   otapi\OTAPI-%%x.cpp
IF EXIST otapi\OTAPI-%%x.h       DEL                              otapi\OTAPI-%%x.h
IF EXIST otapi\OTAPI_wrap.h      MOVE /Y   otapi\OTAPI_wrap.h     otapi\OTAPI-%%x.h


)

ECHO.
ECHO Done!
ECHO.
:END
cd /D %START_DIR%