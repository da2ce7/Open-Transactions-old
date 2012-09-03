/*******************************************************************
*    
*  OTPaths.cpp
*  
*/

/************************************************************
-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

*                 OPEN TRANSACTIONS
*
*       Financial Cryptography and Digital Cash
*       Library, Protocol, API, Server, and GUI 
*    
*    	 -- Anonymous Numbered Accounts.
*    	 -- Untraceable Digital Cash.
*    	 -- Triple-Signed Receipts.
*    	 -- Cheques, Vouchers, Transfers, Inboxes.
*    	 -- Basket Currencies, Markets, Payment Plans.
*    	 -- Signed, XML, Ricardian-style Contracts.
*    
*  Copyright (C) 2010-2012 by "Fellow Traveler" (A pseudonym)
*
*  EMAIL:
*  FellowTraveler@rayservers.net
*  
*  BITCOIN:  1NtTPVVjDsUfDWybS4BwvHpG2pdS9RnYyQ
*
*  KEY FINGERPRINT (PGP Key in license file):
*  9DD5 90EB 9292 4B48 0484  7910 0308 00ED F951 BB8E
*
*  OFFICIAL PROJECT WIKI(s):
*  https://github.com/FellowTraveler/Moneychanger
*  https://github.com/FellowTraveler/Open-Transactions/wiki 
*
*  WEBSITE:
*  http://www.OpenTransactions.org/
*    
*  Components and licensing:
*   -- Moneychanger..A Java client GUI.....LICENSE:.....GPLv3
*   -- OTLib.........A class library.......LICENSE:...LAGPLv3 
*   -- OT-API........A client API..........LICENSE:...LAGPLv3
*   -- testwallet....Command-line client...LICENSE:...LAGPLv3
*   -- OT-Server.....Server Application....LICENSE:....AGPLv3
*  Github.com/FellowTraveler/Open-Transactions/wiki/Components
*
*  All of the above OT components were designed and written by
*  Fellow Traveler, with the exception of Moneychanger, which
*  was contracted out to Vicky C (livewire_3001@yahoo.com).
*
*  -----------------------------------------------------
*
*   LICENSE:
*   This program is free software: you can redistribute it
*   and/or modify it under the terms of the GNU Affero
*   General Public License as published by the Free Software
*   Foundation, either version 3 of the License, or (at your
*   option) any later version.
*    
*   ADDITIONAL PERMISSION under the GNU Affero GPL version 3
*   section 7: (This paragraph applies only to the LAGPLv3
*   components listed above.) If you modify this Program, or
*   any covered work, by linking or combining it with other
*   code, such other code is not for that reason alone subject
*   to any of the requirements of the GNU Affero GPL version 3.
*   (==> This means if you are only using the OT-API, then you
*   don't have to open-source your code--only your changes to
*   Open Transactions itself must be open source. Similar to
*   LGPLv3, except it applies to software-as-a-service, not
*   just to distributing binaries.)
*
*   Extra WAIVER for OpenSSL, Lucre, and all other libraries
*   used by Open Transactions: This program is released under
*   the AGPL with the additional exemption that compiling,
*   linking, and/or using OpenSSL is allowed. The same is true
*   for any other open source libraries included in this
*   project: complete waiver from the AGPL is hereby granted to
*   compile, link, and/or use them with Open Transactions,
*   according to their own terms, as long as the rest of the
*   Open Transactions terms remain respected, with regard to
*   the Open Transactions code itself.
*    
*   Lucre License:
*   This code is also "dual-license", meaning that Ben Lau-
*   rie's license must also be included and respected, since
*   the code for Lucre is also included with Open Transactions.
*   See Open-Transactions/OTLib/Lucre/LUCRE_LICENSE.txt
*   The Laurie requirements are light, but if there is any
*   problem with his license, simply remove the Lucre code.
*   Although there are no other blind token algorithms in Open
*   Transactions (yet. credlib is coming), the other functions
*   will continue to operate.
*   -----------------------------------------------------
*   You should have received a copy of the GNU Affero General
*   Public License along with this program.  If not, see:
*   http://www.gnu.org/licenses/
*
*   If you would like to use this software outside of the free
*   software license, please contact FellowTraveler.
*   (Unfortunately many will run anonymously and untraceably,
*   so who could really stop them?)
*   
*   DISCLAIMER:
*   This program is distributed in the hope that it will be
*   useful, but WITHOUT ANY WARRANTY; without even the implied
*   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
*   PURPOSE.  See the GNU Affero General Public License for
*   more details.
-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1.4.11 (Darwin)

iQIcBAEBCAAGBQJOjvvUAAoJEAMIAO35UbuOBlMP/1LX0xJ9CrTOe1G/mgc+VygT
JPVZDAbQDL/lJXOZMbaPJ/GaLXyEnTViHp97ERrlVuBQz+9uonIKCmPqAGYGVBG1
MGV2QcscXU2aOUT1VPf2OYEOIul0h8FX2lixfqouH9/OkVsGRLr79Zu8z3zdsO4R
ktQtjZEU6lnL2t6cmp/cuXlQnbz1xvxd56xNDR11YP07Z4x+CuDB4EAK+P9TfCwn
tqq5yJmxJM9HtMoi3cUU7kXodKm1n1YZt7O46DOxHqbXqErHChN1ekSK0fXad614
Gmh+5JfvHjx5XoFWMxb46aAAcUiG8+QpFBcKtSYP2X96k1ylgxMCzrK60ec/MxKV
BzvP00OJ6PzzrTlcUaCgJ8ZX+0scOMvW0XKioEorozKSWNFvT4Drc4Thhy8u9ET3
ru1enNFrjdxKjw2+ZTQcKSZjSRx2kMQ2od/dkqUlhe/M1cHGhseH6ls7pItrkykE
ufZ9GlZoxYE+FRatIBPneT9WwsvFFvH+i6cQ/MM9pbTr19g6VPzVZ4U9E65BbTDB
czITynH+uMtJLbprtCdQlsI+vqTgYNoY8AUsmnr1qUkp020qGlvwfCJVrooisTmm
yIh+Yp/KBzySU3inzclaAfv102/t5xi1l+GTyWHiwZxlyt5PBVglKWx/Ust9CIvN
6h9BYZFTZrh/OwBXCdAv
=MUfS
-----END PGP SIGNATURE-----
**************************************************************/

// The long-awaited paths class.

#include <sys/types.h>
#include <sys/stat.h>

#ifndef S_ISDIR
#define S_ISDIR(mode)  (((mode) & S_IFMT) == S_IFDIR)
#endif

#ifndef S_ISREG
#define S_ISREG(mode)  (((mode) & S_IFMT) == S_IFREG)
#endif

#include <memory>
#include <string> // The C++ one 
#include <vector>

#ifdef _WIN32
#include <WinsockWrapper.h>
#include <Shlobj.h>
#include <direct.h>
#else
#include <libgen.h>
#include <unistd.h>
#endif

#ifdef TARGET_OS_MAC
#include <mach-o/dyld.h>
#include <limits.h>
#endif

#ifdef _WIN32
#define OT_APPDATA_DIR "OpenTransactions"
#else
#define OT_APPDATA_DIR ".ot"
#endif

#ifndef OT_PREFIX_PATH
#ifdef _WIN32
#define OT_PREFIX_PATH OTPaths::AppDataFolder() //windows, set to OT AppData Folder.
#else
#define OT_PREFIX_PATH "/usr/local" //default prefix_path unix
#endif
#endif

#define OT_INIT_CONFIG_FILENAME "ot_init.cfg"
#define CONFIG_FILE_EXT ".cfg"
#define OT_HOME_DIR "."
#define OT_CONFIG_DIR "."
#define OT_USER_SCRIPTS_DIR "scripts"
#define DATA_FOLDER_EXT "_data"

#ifdef _WIN32
#define OT_SCRIPTS_DIR "opentxs"
#else
#define OT_SCRIPTS_DIR "lib/opentxs"
#endif


#define OT_LIB_DIR "lib"
#define OT_CONFIG_ISRELATIVE "_is_relative"

#ifdef _WIN32
#include <WinsockWrapper.h>
#include <Shlobj.h>
#include <direct.h>
#else
#include <libgen.h>
#include <unistd.h>
#endif

#include "OTPaths.h"
#include "OTLog.h"


OTString OTPaths::m_strAppDataFolder("");
OTString OTPaths::m_strGlobalConfigFile("");
OTString OTPaths::m_strPrefixFolder("");
OTString OTPaths::m_strScriptsFolder("");


OTPaths::~OTPaths()
{
}

const OTString & OTPaths::AppDataFolder()
{
	if (m_strAppDataFolder.Exists()) return m_strAppDataFolder;  // already got it, just return it.

	OTString strHomeDataFolder(""), strAppDataFolder("");  // eg. /home/user/  (the folder that the OT appdata folder will be in.)

	if(!GetHomeFromSystem(strHomeDataFolder)) { OT_ASSERT(false); return m_strAppDataFolder; }

	// now lets change all the '\' into '/'
	// then check that the path /home/user indeed exists, and is a folder.

	FixPath(strHomeDataFolder,strHomeDataFolder,true);
	if(!PathExists(strHomeDataFolder)) OT_ASSERT(false);

	// ok, we have the HomeData Folder, lets append our OT folder to it.

	if(!AppendFolder(strAppDataFolder,strHomeDataFolder,OT_APPDATA_DIR)) OT_ASSERT(false);

	bool bFolderCreated;
	if(!BuildFolderPath(strAppDataFolder,bFolderCreated)) OT_ASSERT(false);

	m_strAppDataFolder = strAppDataFolder;  // all good lets set it.

	return m_strAppDataFolder;
}

const OTString & OTPaths::GlobalConfigFile()
{
	if (m_strGlobalConfigFile.Exists()) return m_strGlobalConfigFile;  //got it, lets return it.

	OTString strGlobalConfigFile("");

	if(!AppendFile(strGlobalConfigFile,AppDataFolder(),OT_INIT_CONFIG_FILENAME)) OT_ASSERT(false);

	m_strGlobalConfigFile = strGlobalConfigFile;

	return m_strGlobalConfigFile;
}


const OTString & OTPaths::PrefixFolder()
{
	if (m_strPrefixFolder.Exists()) return m_strPrefixFolder;  //got it, lets return it.

	// lets load from the statndard config, or create the entry.
	if(LoadSetPrefixFolder())
		return m_strPrefixFolder;
	else
	{
		OT_ASSERT(false);
		return m_strPrefixFolder;
	}
}

const OTString & OTPaths::ScriptsFolder()
{
	if (m_strScriptsFolder.Exists()) return m_strScriptsFolder;  //got it, lets return it.

	// load it from config (if we already have it set in the config).
	if(LoadSetScriptsFolder())
		return m_strScriptsFolder;
	else
	{
		OT_ASSERT(false);
		return m_strScriptsFolder;
	}

}


// The LoadSet Functions will update the static values.
const bool OTPaths::LoadSetPrefixFolder	// eg. /usr/local/  
	(	
	const std::unique_ptr<OTSettings> & pConfig,	//optional
	const OTString & strPrefixFolder				//optional
	//const bool & bIsRelative (cannot be relative);
	)
{
	if (nullptr == pConfig)  { OT_ASSERT(false); return false; };

	const bool bPreLoaded(pConfig->IsLoaded());

	if (!bPreLoaded)
	{
		pConfig->Reset();
		if(!pConfig->Load()) { OT_ASSERT(false); return false; };
	}

	OTString l_strPath("");
	bool l_bIsNewOrUpdated(false);

	// if we have a supplied path, lets set that first.
	if(strPrefixFolder.Exists() && (3 < strPrefixFolder.GetLength()))
	{
		if (Set(pConfig,"paths","prefix",strPrefixFolder,false,l_bIsNewOrUpdated,";; prefix directory is never relative"))
		{
			m_strPrefixFolder = l_strPath;
			if (!bPreLoaded)
			{
				if(!pConfig->Save()) { OT_ASSERT(false); return false; };
				pConfig->Reset();
			}
			return true;  // success
		}
	}
	else
	{
		OTString l_strOutPath("");
		bool l_bIsRelative(false), l_bKeyExist(false);
		if (Get(pConfig,"paths","prefix",l_strOutPath,l_bIsRelative,l_bKeyExist))
		{
			if(l_bKeyExist) // Use key from config.
			{
				m_strPrefixFolder = l_strPath;
				if (!bPreLoaded) { pConfig->Reset(); }
				return true;  // success
			}
			else // we have to set the default.
			{
				if (Set(pConfig,"paths","prefix",OT_SCRIPTS_DIR,false,l_bIsNewOrUpdated,";; prefix directory is never relative"))
				{
					m_strPrefixFolder = OT_SCRIPTS_DIR;
					if (!bPreLoaded)
					{
						if(!pConfig->Save()) { OT_ASSERT(false); return false; };
						pConfig->Reset();
					}
					return true;  // success
				}
			}
		}
	}

	// if we get here, there has been a error!
	OT_ASSERT(false);
	pConfig->Reset();
	return false;
}

const bool OTPaths::LoadSetScriptsFolder  // ie. PrefixFolder() + lib/opentxs/
	(
	const std::unique_ptr<OTSettings> & pConfig, //optional
	const OTString & strScriptsFolder,	//optional
	const bool & bIsRelative			//optional
	)
{
	if (nullptr == pConfig)  { OT_ASSERT(false); return false; };

	const bool bPreLoaded(pConfig->IsLoaded());

	if (!bPreLoaded)
	{
		pConfig->Reset();
		if(!pConfig->Load()) { OT_ASSERT(false); return false; };
	}

	OTString l_strPath("");
	bool l_bIsNewOrUpdated(false);

	// if we have a supplied path, lets set that first.
	if(strScriptsFolder.Exists() && (3 < strScriptsFolder.GetLength()))
	{
		if (Set(pConfig,"paths","scripts",strScriptsFolder,bIsRelative,l_bIsNewOrUpdated,";; scripts directory"))
		{
			if(bIsRelative)
				if(AppendFolder(l_strPath,PrefixFolder(),strScriptsFolder)); else { OT_ASSERT(false); return false; }
			else l_strPath = strScriptsFolder;

			m_strScriptsFolder = l_strPath;

			if (!bPreLoaded)
			{
				if(!pConfig->Save()) { OT_ASSERT(false); return false; };
				pConfig->Reset();
			}
			return true;  // success
		}
	}
	else
	{
		OTString l_strOutPath("");
		bool l_bIsRelative(false), l_bKeyExist(false);
		if (Get(pConfig,"paths","scripts",l_strOutPath,l_bIsRelative,l_bKeyExist))
		{
			if(l_bKeyExist) // Use key from config.
			{
				if(l_bIsRelative)
					if(AppendFolder(l_strPath,PrefixFolder(),l_strOutPath)); else { OT_ASSERT(false); return false; }
				else l_strPath = l_strOutPath;

				m_strScriptsFolder = l_strPath;

				if (!bPreLoaded) { pConfig->Reset(); }
				return true;  // success
			}
			else // we have to set the default.
			{
				if (Set(pConfig,"paths","scripts",OT_SCRIPTS_DIR,true,l_bIsNewOrUpdated,";; scripts directory"))
				{
					if(AppendFolder(l_strPath,PrefixFolder(),OT_SCRIPTS_DIR))
					{
						m_strScriptsFolder = l_strPath;

						if (!bPreLoaded)
						{
							if(!pConfig->Save()) { OT_ASSERT(false); return false; };
							pConfig->Reset();
						}
						return true;  // success
					}
				}
			}
		}
	}

	// if we get here, there has been a error!
	OT_ASSERT(false);
	pConfig->Reset();
	return false;
}



const bool OTPaths::Get(
	const std::unique_ptr<OTSettings> & pConfig,
	const				  OTString	  & strSection,
	const				  OTString	  & strKey,
	OTString	  & out_strVar,
	bool		  & out_bIsRelative,
	bool		  & out_bKeyExist
	)
{
	if (!strSection.Exists())		{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strSection"	); OT_ASSERT(false); };
	if (!strKey.Exists())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strKey"		); OT_ASSERT(false); };

	out_strVar = "";
	out_bIsRelative = false;
	out_bKeyExist = false;

	if (nullptr == pConfig)  { OT_ASSERT(false); return false; };

	const bool bPreLoaded(pConfig->IsLoaded());

	if (!bPreLoaded)
	{
		pConfig->Reset();
		if(!pConfig->Load()) { OT_ASSERT(false); return false; };
	}

	bool l_bIsRelative(false), l_bBoolExist(false), l_bStringExist(false);
	OTString l_strOutFolder("");

	if(pConfig->Check_bool(strSection,strKey,l_bIsRelative,l_bBoolExist))
	{
		if(pConfig->Check_str(strSection,strKey,l_strOutFolder,l_bStringExist))
		{
			if (l_bBoolExist && l_bStringExist)
			{
				out_strVar = l_strOutFolder;
				out_bIsRelative = l_bIsRelative;
				out_bKeyExist = true;
			}

			if (!bPreLoaded)
			{
				pConfig->Reset();
			}

			return true;
		}
	}
	// if we get here, there has been a error!
	OT_ASSERT(false);
	pConfig->Reset();
	return false;
}

const bool OTPaths::Set(
	const std::unique_ptr<OTSettings> & pConfig,
	const				  OTString	  & strSection,
	const				  OTString	  & strKey,
	const				  OTString	  & strValue,
	const				  bool		  & bIsRelative,
	bool		& out_bIsNewOrUpdated,
	const				  OTString	  & strComment
	)
{
	if (!strSection.Exists())		{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strSection"	); OT_ASSERT(false); }
	if (!strKey.Exists())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strKey"		); OT_ASSERT(false); }

	out_bIsNewOrUpdated = false;

	if (nullptr == pConfig)  { OT_ASSERT(false); return false; };

	const bool bPreLoaded(pConfig->IsLoaded());

	if (!bPreLoaded)
	{
		pConfig->Reset();
		if(!pConfig->Load()) { OT_ASSERT(false); return false; };
	}

	bool l_bBoolIsNew(false), l_bStringIsNew(false);
	OTString l_strPathFixed("");

	OTString l_strKey(strKey), l_strRelativeKey("");

	l_strRelativeKey.Format("%s%s",strKey.Get(),OT_CONFIG_ISRELATIVE);

	if(FixPath(strValue,l_strPathFixed,true))
	{
		if(pConfig->Set_bool(strSection,l_strRelativeKey,bIsRelative,l_bBoolIsNew,strComment))
		{
			if(pConfig->Set_str(strSection,"prefix_folder",l_strPathFixed,l_bStringIsNew))
			{
				if(l_bBoolIsNew && l_bStringIsNew) //using existing key
				{
					out_bIsNewOrUpdated = true;
				}

				if (!bPreLoaded)
				{
					if(!pConfig->Save()) { OT_ASSERT(false); return false; };
					pConfig->Reset();
				}

				return true;
			}
		}
	}

	// if we get here, there has been a error!
	OT_ASSERT(false);
	pConfig->Reset();
	return false;
}


const bool OTPaths::FixPath(const OTString & strPath, OTString & out_strFixedPath, const bool & bIsFolder)
{
	if (!strPath.Exists())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strPath"	); OT_ASSERT(false); }



	std::string l_strPath(strPath.Get());
	// first change all back-slashes to forward slashes:
	std::string l_strPath_noBackslash(OTString::replace_chars(l_strPath,"\\",'/'));


	// now we make sure we have the correct trailing "/".

	if ('/' == *l_strPath_noBackslash.rbegin())
	{
		if (bIsFolder)
		{
			out_strFixedPath.Set(l_strPath_noBackslash.c_str());
			return true;
		}
		else
		{
			out_strFixedPath.Set(l_strPath_noBackslash.substr(0, l_strPath_noBackslash.size()-1).c_str());
			return true;
		}
	}
	else
	{
		if (bIsFolder)
		{
			l_strPath_noBackslash += "/";
			out_strFixedPath.Set(l_strPath_noBackslash.c_str());
			return true;
		}
		else
		{
			out_strFixedPath.Set(l_strPath_noBackslash.c_str());
			return true;
		}
	}
}


const bool OTPaths::PathExists(const OTString & strPath)
{
	if (!strPath.Exists()) { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strPath" ); OT_ASSERT(false); };


	// remove trailing backslash for stat
	std::string l_strPath(strPath.Get());
	l_strPath = (OTString::replace_chars(l_strPath,"\\",'/'));  // all \ to /

	//std::string l_strPath_stat = l_strPath;
	std::string l_strPath_stat("");
	
	// remove last / if it exists (for l_strPath_stat)
	if ('/' == *l_strPath.rbegin())
		l_strPath_stat = l_strPath.substr(0, l_strPath.size()-1);
	else l_strPath_stat = l_strPath;

	struct stat st; 

	if (0 == stat(l_strPath_stat.c_str(), &st)) // good we have at-least on a node
	{
		if ('/' != *l_strPath.rbegin())
		{
			long temp_l;
			return FileExists(strPath,temp_l);
		}
		else
		{
			return FolderExists(strPath);
		}
	}
	return false;
}

const bool OTPaths::FileExists(const OTString & strFilePath, long & nFileLength)
{
	if (!strFilePath.Exists()) { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strFilePath" ); OT_ASSERT(false); };


	// remove trailing backslash for stat
	std::string l_strPath(strFilePath.Get());
	l_strPath = (OTString::replace_chars(l_strPath,"\\",'/'));  // all \ to /

	//std::string l_strPath_stat = l_strPath;
	std::string l_strPath_stat("");
	
	// remove last / if it exists (for l_strPath_stat)
	if ('/' == *l_strPath.rbegin())
		l_strPath_stat = l_strPath.substr(0, l_strPath.size()-1);
	else l_strPath_stat = l_strPath;


	if ('/' != *l_strPath.rbegin())
	{


		int status;
#ifdef _WIN32
		struct _stat st_buf;
		char filename[4086];	// not sure about this buffer,
		// on windows paths cannot be longer than 4086,
		// so it should be fine... needs more research.
		strcpy_s(filename,l_strPath_stat.c_str());
		status = _stat(filename, &st_buf );
#else
		struct stat st_buf;
		status = stat (l_strPath.c_str(), &st_buf);
#endif

		// check for file
		if (S_ISREG(st_buf.st_mode))
		{
			// good we have a file.
			size_t lFileLength = st_buf.st_size;
			nFileLength = static_cast<long>(lFileLength);
			return true;
		}
	}
	return false;
}

const bool OTPaths::FolderExists(const OTString & strFolderPath)
{
	if (!strFolderPath.Exists()) { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strFolderPath" ); OT_ASSERT(false); };

	// remove trailing backslash for stat
	std::string l_strPath(strFolderPath.Get());
	l_strPath = (OTString::replace_chars(l_strPath,"\\",'/'));  // all \ to /

	//std::string l_strPath_stat = l_strPath;
	std::string l_strPath_stat("");
	
	// remove last / if it exists (for l_strPath_stat)
	if ('/' == *l_strPath.rbegin())
		l_strPath_stat = l_strPath.substr(0, l_strPath.size()-1);
	else l_strPath_stat = l_strPath;

	if ('/' == *l_strPath.rbegin())
	{

		int status;
#ifdef _WIN32
		struct _stat st_buf;
		char filename[4086];	// not sure about this buffer,
		// on windows paths cannot be longer than 4086,
		// so it should be fine... needs more research.
		strcpy_s(filename,l_strPath_stat.c_str());
		status = _stat(filename, &st_buf );
#else
		struct stat st_buf;
		status = stat (l_strPath.c_str(), &st_buf);
#endif

		if (S_ISDIR(st_buf.st_mode))
		{
			// good we have a directory.
			return true;
		}
	}
	return false;
}



const bool OTPaths::ConfirmCreateFolder(const OTString & strExactPath, bool & out_Exists, bool & out_IsNew)
{
	const bool bExists = (strExactPath.Exists() && !strExactPath.Compare(""));
	OT_ASSERT_MSG(bExists,"OTPaths::ConfirmCreateFolder: Assert failed: no strFolderName\n");

	std::string l_strExactPath(strExactPath.Get());

	if ('/' != *l_strExactPath.rbegin()) return false; // not a directory.

	// Confirm If Directory Exists Already
	out_Exists = PathExists(strExactPath);

	if (out_Exists)
	{
		out_IsNew = false;
		return true;  // Already Have Folder, lets retun true!
	}
	else 
	{
		// It dosn't exist: lets create it.

#ifdef _WIN32
		bool bCreateDirSuccess = (_mkdir(strExactPath.Get()) == 0);
#else
		bool bCreateDirSuccess = (mkdir(strExactPath.Get(), 0700) == 0);
#endif

		if (!bCreateDirSuccess) 
		{
			OTLog::vError("OTPaths::ConfirmCreateFolder: Unable To Confirm "
				"Created Directory %s.\n", strExactPath.Get());
			out_IsNew = false;
			out_Exists = false;
			return false;
		}

		// At this point if the folder still doesn't exist, nothing we can do. We
		// already tried to create the folder, and SUCCEEDED, and then STILL failed 
		// to find it (if this is still false.)

		else 
		{
			bool bCheckDirExist = PathExists(strExactPath);

			if (!bCheckDirExist) 
			{
				OTLog::vError("OTPaths::ConfirmCreateFolder: "
					"Unable To Confirm Created Directory %s.\n", 
					strExactPath.Get());
			out_IsNew = false;
			out_Exists = false;
				return false;
			}
			else
			{
			out_IsNew = true;
			out_Exists = false;
				return true;  // We have Created and checked the Folder
			}
		}
	}
	return false; // should never happen.
}





const bool OTPaths::ToReal(const OTString & strExactPath, OTString & out_strCanonicalPath)
{
	if (!strExactPath.Exists())		{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strExactPath"); OT_ASSERT(false); };

#ifdef _WIN32
#ifdef _UNICODE	

	const char * szPath = strExactPath.Get();
	size_t newsize = strlen(szPath) + 1;
	wchar_t * wzPath = new wchar_t[newsize];

	size_t convertedChars = 0;
	mbstowcs_s(&convertedChars, wzPath, newsize, szPath,4096);

	wchar_t szBuf[4096];

	if(GetFullPathName(wzPath,4096,szBuf,NULL))
	{
		out_strCanonicalPath.Set(utf8util::UTF8FromUTF16(szBuf));
		return true;
	}
	else 
	{
		out_strCanonicalPath.Set("");
		return false;
	}

#else
	char_t szBuf[4096];
	char_t const * szPath = strRealPath.Get();

	if(GetFullPathName(szPath,4096,szBuf,NULL))
	{
		out_strCanonicalPath.Set(szBuf);
		return true;
	}
	else
	{
		out_strCanonicalPath.Set("");
		return false;
	}

#endif
#else

	long path_max;
#ifdef PATH_MAX
	path_max = PATH_MAX;
#else
	path_max = pathconf("/", _PC_PATH_MAX);
	if (path_max <= 0)  path_max = 4096;
#endif

	char actualpath [path_max+1];
	char *ptr;

	if (NULL ==  realpath(strExactPath.Get(), actualpath)) {

		if (errno == ENOTDIR) {
			OTLog::vOutput(1,"Input value to RealPath is not a directory: (Realpath: skipping)\n");
			out_strCanonicalPath.Set(strExactPath);
			return true;
		}

		if (errno == ENOENT) {
			OTLog::vOutput(1,"File doesn't exist: (Realpath: skipping)\n");
			out_strCanonicalPath.Set(strExactPath);
			return true;
		}

		OT_ASSERT_MSG((errno != EACCES),"Error (Realpath: EACCES): Unable to build RealPath: access denied");
		OT_ASSERT_MSG((errno != EINVAL),"Error (RealPath: EINVAL): Input value into RealPath was NULL");
		OT_ASSERT_MSG((errno != ELOOP),"Error (RealPath: ELOOP): Resloving links resulted in a loop.");
		OT_ASSERT_MSG((errno != ENAMETOOLONG),"Error (RealPath: ENAMETOOLONG): Name too long.");
		OT_ASSERT_MSG((errno != ERANGE),"Error (RealPath: ERANGE): Resulting path is too long for the buffer");
		OT_ASSERT_MSG((errno != EIO),"Error (RealPath: EIO): Unable to access path.");

		OT_ASSERT_MSG((false),"Error (RealPath: OTHER): Something bad Happend with 'realpath'.");
	}
	out_strCanonicalPath.Set(actualpath);

#endif
	return true;
}

const bool GetExecutable(OTString & strExecutablePath)
{
#ifdef TARGET_OS_MAC
	char bufPath[PATH_MAX + 1];
	uint32_t size = sizeof(bufPath);
	int  bufsize = sizeof(bufPath);
	if (_NSGetExecutablePath(bufPath, &bufsize) == 0)
		strExecutablePath.Set(bufPath);
	else return false;
#elif defined __linux__

	char buff[4096];
	ssize_t len = ::readlink("/proc/self/exe", buff, sizeof(buff)-1);
	if (len != -1) {  // good
		buff[len] = '\0';
		strExecutablePath.Set(buff);
	}
	else {  // bad
		strExecutablePath.Set("");
		return false;
	}

#elif defined _WIN32

	TCHAR bufPath[ _MAX_PATH+1 ] ; 
	GetModuleFileName( NULL , bufPath , sizeof(bufPath)/sizeof(TCHAR) ) ;

#ifdef UNICODE
	strExecutablePath.Set(utf8util::UTF8FromUTF16(bufPath));
#else
	strExecutablePath.Set(bufPath);
#endif
#else
	return false;
#endif
	return true;
}

const bool GetCurrentWorking(OTString & strCurrentWorkingPath)
{

#ifdef _WIN32
	// Windows Common
	TCHAR * szPath;
#ifdef _UNICODE
	// Windows Unicode
#define GetCurrentDir _wgetcwd
#else
	// Windows No-Unicode
#define GetCurrentDir _getcwd
#endif
#else
	// Unix
#define GetCurrentDir getcwd
	char * szPath;
#endif

	// All
	bool r = ((szPath = GetCurrentDir(NULL,0)) == 0);
	OT_ASSERT(0 != r);

	OTString result;

#ifdef _WIN32
#ifdef _UNICODE
	// Windows Unicode
	strCurrentWorkingPath.Set(utf8util::UTF8FromUTF16(szPath));
#endif
#else
	// Unix
	strCurrentWorkingPath.Set(szPath);
#endif
	// All
	return true;
};

const bool OTPaths::GetHomeFromSystem(OTString & out_strHomeFolder)
{
#ifdef _WIN32
	TCHAR szPath[MAX_PATH];
	if(SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA|CSIDL_FLAG_CREATE, NULL, 0, szPath))) {
#ifdef UNICODE
		out_strHomeFolder.Set(utf8util::UTF8FromUTF16(szPath));
#else
		out_strHomeFolder.Set(szPath);
#endif
	}
	else { out_strHomeFolder.Set(""); return false; };
#else
	out_strHomeFolder.Set(getenv("HOME"));
#endif
	return true;
}


const bool OTPaths::AppendFolder(OTString & out_strPath, const OTString & strBasePath, const OTString & strFolderName)
{
	if (!strBasePath.Exists())		{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strBasePath"); OT_ASSERT(false); };
	if (!strFolderName.Exists())	{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strFolderName"); OT_ASSERT(false); };

	OTString l_strBasePath_fix(""), l_strFolderName_fix("");

	if(!FixPath(strBasePath,l_strBasePath_fix,true)) return false;
	if(!FixPath(strFolderName,l_strFolderName_fix,true)) return false;

	std::string l_strBasePath(l_strBasePath_fix.Get()), l_strFolderName(l_strFolderName_fix.Get());

	l_strBasePath.append(l_strFolderName);

	const OTString l_strPath(l_strBasePath);

	out_strPath = l_strPath;
	return true;
}

const bool OTPaths::AppendFile(OTString & out_strPath, const OTString & strBasePath, const OTString & strFileName)
{
	if (!strBasePath.Exists())	{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strBasePath"); OT_ASSERT(false); };
	if (!strFileName.Exists())	{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strFileName"); OT_ASSERT(false); };

	OTString l_strBasePath_fix(""), l_strFileName_fix("");

	if(!FixPath(strBasePath,l_strBasePath_fix,true)) return false;
	if(!FixPath(strFileName,l_strFileName_fix,false)) return false;

	std::string l_strBasePath(l_strBasePath_fix.Get()), l_strFileName(l_strFileName_fix.Get());

	l_strBasePath.append(l_strFileName);

	const OTString l_strPath(l_strBasePath);

	out_strPath = l_strPath;
	return true;
}

// this function dosn't change the "strRelativePath" so.  It will only fix the strBasePath.
const bool OTPaths::RelativeToCanonical(OTString & out_strCanonicalPath, const OTString & strBasePath, const OTString & strRelativePath)
{
	if (!strBasePath.Exists())	   { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strBasePath"	); OT_ASSERT(false); };
	if (!strRelativePath.Exists()) { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strRelativePath" ); OT_ASSERT(false); };

	OTString l_strBasePath_fix("");
	if(!FixPath(strBasePath,l_strBasePath_fix,true)) return false;

	if(strRelativePath.Compare(".")) { out_strCanonicalPath = strBasePath; return true; }  // if ".", return base path.

	std::string l_strBasePath(l_strBasePath_fix.Get()), l_strRelativePath(strRelativePath.Get());

	l_strBasePath.append(l_strRelativePath);

	OTString l_strPath(l_strBasePath), l_strCanonicalPath("");

	if(!ToReal(l_strPath,l_strCanonicalPath)) return false;

	out_strCanonicalPath = l_strCanonicalPath;

	return true;
}


const bool OTPaths::BuildFolderPath(const OTString & strFolderPath, bool & out_bFolderCreated)
{
	out_bFolderCreated = false;

	OTString l_strFolderPath_fix(""), l_strFolderPath_real("");

	if (!ToReal(strFolderPath,l_strFolderPath_real)) return false;  // path to real

	if (!FixPath(l_strFolderPath_real,l_strFolderPath_fix,true)) return false; // real to fixed real

	std::string l_strFolderPath(l_strFolderPath_fix.Get());  // fixed real path.

	std::vector<std::string> vFolders;

	OTString::split_byChar(vFolders,l_strFolderPath,"/",OTString::split::no_empties);

	size_t nSize = vFolders.size();

	std::string l_strPathPart("");
	bool l_FolderExists(false), l_bBuiltFolder(false);

	const bool bLog(OTLog::IsInitialized());

	for (int i = 0; i < nSize; i++)
	{
#ifndef _WIN32  // aka UNIX
		if(0 == i) l_strPathPart += "/"; //add annother / for root.
#endif
		l_strPathPart += vFolders[i];
		l_strPathPart += "/";

		if(0 == i) continue; // / or x:/ should be skiped.

		if(!ConfirmCreateFolder(l_strPathPart.c_str(),l_FolderExists,l_bBuiltFolder)) return false;
		if (bLog && l_bBuiltFolder) OTLog::vOutput(0,"%s: Made New Folder: %s", __FUNCTION__, l_strPathPart.c_str());

		if (!out_bFolderCreated && l_bBuiltFolder) out_bFolderCreated = true;
	}
	return true;
}



const bool OTPaths::BuildFilePath(const OTString & strFolderPath, bool & out_bFolderCreated)
{
	out_bFolderCreated = false;

	OTString l_strFilePath_fix(""), l_strFilePath_real("");

	if (!ToReal(strFolderPath,l_strFilePath_real)) return false;  // path to real

	if (!FixPath(l_strFilePath_real,l_strFilePath_fix,false)) return false; // real to fixed real

	std::string l_strFilePath(l_strFilePath_fix.Get());  // fixed real path.

	std::vector<std::string> vFolders;

	OTString::split_byChar(vFolders,l_strFilePath,"/",OTString::split::no_empties);

	size_t nSize = vFolders.size();

	std::string l_strPathPart("");
	bool l_FolderExists(false), l_bBuiltFolder(false);

	const bool bLog(OTLog::IsInitialized());

	for (int i = 0; i < nSize; i++)
	{
#ifndef _WIN32  // aka UNIX
		if(0 == i) l_strPathPart += "/"; //add annother / for root.
#endif

		l_strPathPart += vFolders[i];
		
		if((i +1)  == nSize) continue; // file should be skipped

		l_strPathPart += "/";  // is a folder, so should append /

		if(0 == i) continue; // / or x:/ should be skiped.


		if(!ConfirmCreateFolder(l_strPathPart.c_str(),l_FolderExists,l_bBuiltFolder)) return false;
		if (bLog && l_bBuiltFolder) OTLog::vOutput(0,"%s: Made New Folder: %s", __FUNCTION__, l_strPathPart.c_str());

		if (!out_bFolderCreated && l_bBuiltFolder) out_bFolderCreated = true;
	}
	return true;
}











#ifndef thread_local
#define thread_local
#endif
thread_local OTDataFolder * OTDataFolder::pDataFolder;

const bool OTDataFolder::Init(const OTString & strThreadContext)
{
	if (nullptr != pDataFolder) return false; // we already have a data dir setup.

	if (!strThreadContext.Exists())	   { OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strThreadContext"	); OT_ASSERT(false); };
	if (3 > strThreadContext.GetLength())	   { OTLog::sError("%s: Too Short: %s !\n", __FUNCTION__, "strThreadContext"	); OT_ASSERT(false); };

	pDataFolder = new OTDataFolder;  // make the new instance

	pDataFolder->m_bInitialized = false;

	// setup the config instance.
	const std::unique_ptr<OTSettings> pSettings(new OTSettings(OTPaths::GlobalConfigFile()));
	pSettings->Reset();
	if (!pSettings->Load()) return false;

	// setup the RelativeKey
	OTString l_strRelativeKey("");
	l_strRelativeKey.Format("%s%s",strThreadContext.Get(),OT_CONFIG_ISRELATIVE);

	bool l_IsRelative(false), l_Exist(false);
	OTString l_strFolderName(""), l_strDataConifgFilename("");

	// check the config for an existing configuration.
	if(!pSettings->Check_bool("data_path",l_strRelativeKey,l_IsRelative,l_Exist)) { return false; };			// is data folder relative

	if (l_Exist)
	{
		if(!pSettings->Check_str("data_path",strThreadContext,l_strFolderName,l_Exist)) { return false; };	// what is the data folder

		if (l_Exist)
		{
			if(!pSettings->Check_str("data_config",strThreadContext,l_strDataConifgFilename,l_Exist)) { return false; };	// what is config file name

			if (l_Exist)
			{
				if (l_IsRelative) // data folder path
				{
					if(!OTPaths::AppendFolder(pDataFolder->m_strDataFolderPath, OTPaths::AppDataFolder(), l_strFolderName)) { return false; };
				}
				else
				{
					pDataFolder->m_strDataFolderPath = l_strFolderName;
				};

				// data config file path.
				if(!OTPaths::AppendFile(pDataFolder->m_strDataConifgFilePath, OTPaths::AppDataFolder(), l_strDataConifgFilename)) { return false; };

				pDataFolder->m_bInitialized = true;
				return true;
			}
		}
	};

	// if we get here we do not have a valid config, lets set one.

	// setup the default conifg file-name;
	l_strFolderName.Format("%s%s",strThreadContext.Get(), DATA_FOLDER_EXT);
	l_strDataConifgFilename.Format("%s%s",strThreadContext.Get(), CONFIG_FILE_EXT);

	if(!pSettings->Set_bool("data_path", l_strRelativeKey, true, l_Exist)) { return false; };
	if(!pSettings->Set_str("data_path", strThreadContext, l_strFolderName,l_Exist)) { return false; };
	if(!pSettings->Set_str("data_config", strThreadContext, l_strDataConifgFilename, l_Exist)) { return false; };

	if(!OTPaths::AppendFolder(pDataFolder->m_strDataFolderPath,OTPaths::AppDataFolder(),l_strFolderName)) { return false; };
	if(!OTPaths::AppendFile(pDataFolder->m_strDataConifgFilePath, OTPaths::AppDataFolder(), l_strDataConifgFilename)) { return false; };

	// save config
	if (!pSettings->Save()) return false;
	pSettings->Reset();

	// have set the default dir, now returning true;

	pDataFolder->m_bInitialized = true;
	return true;
}

const bool OTDataFolder::IsInitialized()
{
	if (nullptr == pDataFolder) return false; // we already have a data dir setup.

	return pDataFolder->m_bInitialized;
}

const bool OTDataFolder::Cleanup()
{
	if (nullptr != pDataFolder)
	{
		delete pDataFolder;
		pDataFolder = nullptr;
		return true;
	}
	else
	{
		pDataFolder = nullptr;
		return false;
	}
}


const OTString & OTDataFolder::Get()
{
	return  pDataFolder->m_strDataFolderPath;
}

const OTString & OTDataFolder::GetConfigFilePath()
{
	return pDataFolder->m_strDataConifgFilePath;
}


#define	DEFAULT_ACCOUNT			"accounts"
#define	DEFAULT_CERT			"certs"
#define	DEFAULT_CONTRACT		"contracts"
#define	DEFAULT_CRON			"cron"
#define	DEFAULT_INBOX			"inbox"
#define	DEFAULT_MARKET			"markets"
#define	DEFAULT_MINT			"mints"
#define	DEFAULT_NYM				"nyms"
#define	DEFAULT_NYMBOX			"nymbox"
#define	DEFAULT_OUTBOX			"outbox"
#define	DEFAULT_PAYMENTINBOX	"paymentInbox"
#define	DEFAULT_PUBKEY			"pubkeys"
#define	DEFAULT_PURSE			"purse"
#define	DEFAULT_RECEIPT			"receipts"
#define	DEFAULT_RECORDBOX		"recordBox"
#define	DEFAULT_SCRIPT			"scripts"
#define	DEFAULT_SMARTCONTRACTS	"smartcontracts"
#define	DEFAULT_SPENT			"spent"
#define	DEFAULT_USERACCT		"useraccounts"

#define	KEY_ACCOUNT				"account"
#define	KEY_CERT				"cert"
#define	KEY_CONTRACT			"contract"
#define	KEY_CRON				"cron"
#define	KEY_INBOX				"inbox"
#define	KEY_MARKET				"market"
#define	KEY_MINT				"mint"
#define	KEY_NYM					"nym"
#define	KEY_NYMBOX				"nymbox"
#define	KEY_OUTBOX				"outbox"
#define	KEY_PAYMENTINBOX		"paymentinbox"
#define	KEY_PUBKEY				"pubkey"
#define	KEY_PURSE				"purse"
#define	KEY_RECEIPT				"receipt"
#define	KEY_RECORDBOX			"recordbox"
#define	KEY_SCRIPT				"script"
#define	KEY_SMARTCONTRACTS		"smartcontracts"
#define	KEY_SPENT				"spent"
#define	KEY_USERACCT			"useracct"



OTString OTFolders::m_strAccount("");
OTString OTFolders::m_strCert("");
OTString OTFolders::m_strContract("");
OTString OTFolders::m_strCron("");
OTString OTFolders::m_strInbox("");
OTString OTFolders::m_strMarket("");
OTString OTFolders::m_strMint("");
OTString OTFolders::m_strNym("");
OTString OTFolders::m_strNymbox("");
OTString OTFolders::m_strOutbox("");
OTString OTFolders::m_strPaymentInbox("");
OTString OTFolders::m_strPubkey("");
OTString OTFolders::m_strPurse("");
OTString OTFolders::m_strReceipt("");
OTString OTFolders::m_strRecordBox("");
OTString OTFolders::m_strScript("");
OTString OTFolders::m_strSmartContracts("");
OTString OTFolders::m_strSpent("");
OTString OTFolders::m_strUserAcct("");



const bool OTFolders::GetSetAll()
{
	const std::unique_ptr<OTSettings> pConfig(new OTSettings(OTPaths::GlobalConfigFile()));

	pConfig->Reset();

	if(!pConfig->Load()) return false;

	if(!GetSetFolderName(pConfig,KEY_ACCOUNT,		DEFAULT_ACCOUNT,		m_strAccount		)) return false;
	if(!GetSetFolderName(pConfig,KEY_CERT,			DEFAULT_CERT,			m_strCert			)) return false;
	if(!GetSetFolderName(pConfig,KEY_CONTRACT,		DEFAULT_CONTRACT,		m_strContract		)) return false;
	if(!GetSetFolderName(pConfig,KEY_CRON,			DEFAULT_CRON,			m_strCron			)) return false;
	if(!GetSetFolderName(pConfig,KEY_INBOX,			DEFAULT_INBOX,			m_strInbox			)) return false;
	if(!GetSetFolderName(pConfig,KEY_MARKET,		DEFAULT_MARKET,			m_strMarket			)) return false;
	if(!GetSetFolderName(pConfig,KEY_MINT,			DEFAULT_MINT,			m_strMint			)) return false;
	if(!GetSetFolderName(pConfig,KEY_NYM,			DEFAULT_NYM,			m_strNym			)) return false;
	if(!GetSetFolderName(pConfig,KEY_NYMBOX,		DEFAULT_NYMBOX,			m_strNymbox			)) return false;
	if(!GetSetFolderName(pConfig,KEY_OUTBOX,		DEFAULT_OUTBOX,			m_strOutbox			)) return false;
	if(!GetSetFolderName(pConfig,KEY_PAYMENTINBOX,	DEFAULT_PAYMENTINBOX,	m_strPaymentInbox	)) return false;
	if(!GetSetFolderName(pConfig,KEY_PUBKEY,		DEFAULT_PUBKEY,			m_strPubkey			)) return false;
	if(!GetSetFolderName(pConfig,KEY_PURSE,			DEFAULT_PURSE,			m_strPurse			)) return false;
	if(!GetSetFolderName(pConfig,KEY_RECEIPT,		DEFAULT_RECEIPT,		m_strReceipt		)) return false;
	if(!GetSetFolderName(pConfig,KEY_RECORDBOX,		DEFAULT_RECORDBOX,		m_strRecordBox		)) return false;
	if(!GetSetFolderName(pConfig,KEY_SCRIPT,		DEFAULT_SCRIPT,			m_strScript			)) return false;
	if(!GetSetFolderName(pConfig,KEY_SMARTCONTRACTS,DEFAULT_SMARTCONTRACTS,	m_strSmartContracts	)) return false;
	if(!GetSetFolderName(pConfig,KEY_SPENT,			DEFAULT_SPENT,			m_strSpent			)) return false;
	if(!GetSetFolderName(pConfig,KEY_USERACCT,		DEFAULT_USERACCT,		m_strUserAcct		)) return false;

	if(!pConfig->Save()) return false;

	pConfig->Reset();

	return true;
}

const OTString & OTFolders::Account()		{ return GetFolder(m_strAccount		); }
const OTString & OTFolders::Cert()			{ return GetFolder(m_strCert		); }
const OTString & OTFolders::Contract()		{ return GetFolder(m_strContract	); }
const OTString & OTFolders::Cron()			{ return GetFolder(m_strCron		); }
const OTString & OTFolders::Inbox()			{ return GetFolder(m_strInbox		); }
const OTString & OTFolders::Market()		{ return GetFolder(m_strMarket		); }
const OTString & OTFolders::Mint()			{ return GetFolder(m_strMint		); }
const OTString & OTFolders::Nym()			{ return GetFolder(m_strNym			); }
const OTString & OTFolders::Nymbox()		{ return GetFolder(m_strNymbox		); }
const OTString & OTFolders::Outbox()		{ return GetFolder(m_strOutbox		); }
const OTString & OTFolders::PaymentInbox()	{ return GetFolder(m_strPaymentInbox); }
const OTString & OTFolders::Pubkey()		{ return GetFolder(m_strPubkey		); }
const OTString & OTFolders::Purse()			{ return GetFolder(m_strPurse		); }
const OTString & OTFolders::Receipt()		{ return GetFolder(m_strReceipt		); }
const OTString & OTFolders::RecordBox()		{ return GetFolder(m_strRecordBox	); }
const OTString & OTFolders::Script()		{ return GetFolder(m_strScript		); }
const OTString & OTFolders::SmartContracts(){ return GetFolder(m_strSmartContracts); }
const OTString & OTFolders::Spent()			{ return GetFolder(m_strSpent		); }
const OTString & OTFolders::UserAcct()		{ return GetFolder(m_strUserAcct	); }
