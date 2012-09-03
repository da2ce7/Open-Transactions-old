/************************************************************************************

OTAPI_Basic.cpp   --	A C++ wrapper class (named OTAPI_Basic)

This is a Direct sub-set of OTAPI_Wrap

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

#ifndef EXPORT
#define EXPORT
#endif
#ifndef NOEXPORT
#include <ExportWrapper.h>
#endif

#include <string>
#include <set>
#include <list>
#include <vector>
#include <memory>




#include <OTAPI_Basic.h>
#include <OTAPI.h>

#include <OTLog.h>






OTAPI_Basic::OTAPI_Basic()
{
	OTAPI_Wrap::Init();
}

bool OTAPI_Basic::WalletExists()
{
	return OTAPI_Wrap::WalletExists();
}

bool OTAPI_Basic::SetWallet(const std::string & strWalletFilename)
{
	return OTAPI_Wrap::SetWallet(strWalletFilename);
}

bool OTAPI_Basic::LoadWallet()
{
	return OTAPI_Wrap::LoadWallet();
}

bool OTAPI_Basic::SwitchWallet()
{
	return OTAPI_Wrap::SwitchWallet();
}

void OTAPI_Basic::Output(
	long nLogLevel,
	const std::string & strOutput
	)
{
	OTAPI_Wrap::Output(nLogLevel,strOutput);
}

std::string OTAPI_Basic::GetTime()
{
	//int64_t lTime = OTAPI_Wrap::StringToLong(OTAPI_Wrap::GetTime());
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::GetTime());
}

std::string OTAPI_Basic::NumList_Add(
	const std::string & strNumList,
	const std::string & strNumbers
	)
{
	if (strNumList.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumList"			); OT_ASSERT(false); }

	return OTAPI_Wrap::NumList_Add(strNumList,strNumbers);
}

std::string OTAPI_Basic::NumList_Remove(
	const std::string & strNumList,
	const std::string & strNumbers
	)
{
	if (strNumList.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumList"			); OT_ASSERT(false); }
	if (strNumbers.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumbers"			); OT_ASSERT(false); }

	return OTAPI_Wrap::NumList_Remove(strNumList,strNumbers);
}

bool OTAPI_Basic::NumList_VerifyQuery(
	const std::string & strNumList,
	const std::string & strNumbers
	)
{
	if (strNumList.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumList"			); OT_ASSERT(false); }
	if (strNumbers.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumbers"			); OT_ASSERT(false); }

	return OTAPI_Wrap::NumList_VerifyQuery(strNumList,strNumbers);
}

bool OTAPI_Basic::NumList_VerifyAll(
	const std::string & strNumList,
	const std::string & strNumbers
	)
{
	if (strNumList.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumList"			); OT_ASSERT(false); }
	if (strNumbers.empty())			{ OTLog::sError("%s: Null: %s passed in!\n", __FUNCTION__, "strNumbers"			); OT_ASSERT(false); }

	return OTAPI_Wrap::NumList_VerifyAll(strNumList,strNumbers);
}

long OTAPI_Basic::NumList_Count(
	const std::string & strNumList
	)
{
	return OTAPI_Wrap::NumList_Count(strNumList);
}

std::string OTAPI_Basic::Encode(
	const std::string & strPlaintext,
	const bool & bLineBreaks
	)
{
	return OTAPI_Wrap::Encode(strPlaintext,bLineBreaks);
}

std::string OTAPI_Basic::Decode(
	const std::string & strEncoded,
	const bool & bLineBreaks
	)
{
	return OTAPI_Wrap::Decode(
		strEncoded,
		bLineBreaks
		);
}

std::string OTAPI_Basic::Encrypt(
	const std::string & RECIPIENT_NYM_ID,
	const std::string & strPlainText
	)
{
	return OTAPI_Wrap::Encrypt(
		RECIPIENT_NYM_ID,
		strPlainText
		);
}

std::string OTAPI_Basic::Decrypt(
	const std::string & RECIPIENT_NYM_ID,
	const std::string & strCiphertext
	)
{
	return OTAPI_Wrap::Decrypt(
		RECIPIENT_NYM_ID,
		strCiphertext
		);
}

std::string OTAPI_Basic::CreateSymmetricKey()
{
	return OTAPI_Wrap::CreateSymmetricKey();
}

std::string OTAPI_Basic::SymmetricEncrypt(
	const std::string & SYMMETRIC_KEY,
	const std::string & PLAINTEXT
	)
{
	return OTAPI_Wrap::SymmetricEncrypt(
		SYMMETRIC_KEY,
		PLAINTEXT
		);
}

std::string OTAPI_Basic::SymmetricDecrypt(
	const std::string & SYMMETRIC_KEY,
	const std::string & CIPHERTEXT_ENVELOPE
	)
{
	return OTAPI_Wrap::SymmetricDecrypt(
		SYMMETRIC_KEY,
		CIPHERTEXT_ENVELOPE
		);
}

std::string OTAPI_Basic::SignContract(
	const std::string & SIGNER_NYM_ID,
	const std::string & THE_CONTRACT
	)
{	
	return OTAPI_Wrap::SymmetricDecrypt(
		SIGNER_NYM_ID,
		THE_CONTRACT
		);
}

std::string OTAPI_Basic::FlatSign(
	const std::string & SIGNER_NYM_ID,
	const std::string & THE_INPUT,
	const std::string & CONTRACT_TYPE
	)
{
		return OTAPI_Wrap::FlatSign(SIGNER_NYM_ID,THE_INPUT,CONTRACT_TYPE);
}

std::string OTAPI_Basic::AddSignature(
	const std::string & SIGNER_NYM_ID,
	const std::string & THE_CONTRACT
	)
{
	return OTAPI_Wrap::AddSignature(
		SIGNER_NYM_ID,
		THE_CONTRACT
		);
}

bool OTAPI_Basic::VerifySignature(
	const std::string & SIGNER_NYM_ID,
	const std::string & THE_CONTRACT
	)
{
	return OTAPI_Wrap::VerifySignature(
		SIGNER_NYM_ID,
		THE_CONTRACT
		);
}

std::string OTAPI_Basic::VerifyAndRetrieveXMLContents(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_ID
	)

{
	return OTAPI_Wrap::VerifyAndRetrieveXMLContents(
		THE_CONTRACT,
		SIGNER_ID
		);
}

long OTAPI_Basic::GetMemlogSize() { return OTAPI_Wrap::GetMemlogSize(); }

std::string OTAPI_Basic::GetMemlogAtIndex(const long & nIndex) { return OTAPI_Wrap::GetMemlogAtIndex(nIndex); }

std::string OTAPI_Basic::PeekMemlogFront() { return OTAPI_Wrap::PeekMemlogFront(); }
std::string OTAPI_Basic::PeekMemlogBack() { return OTAPI_Wrap::PeekMemlogBack(); }

bool OTAPI_Basic::PopMemlogFront() { return OTAPI_Wrap::PopMemlogFront(); }
bool OTAPI_Basic::PopMemlogBack() {return OTAPI_Wrap::PopMemlogBack(); }

std::string OTAPI_Basic::CreateNym(const long & nKeySize) // must be 1024, 2048, 4096, or 8192 
{
	return OTAPI_Wrap::CreateNym(
		nKeySize
		);
}

std::string OTAPI_Basic::CreateServerContract(
	const std::string & NYM_ID,
	const std::string & strXMLcontents
	)
{
	return OTAPI_Wrap::CreateServerContract(
		NYM_ID,
		strXMLcontents
		);
}


std::string OTAPI_Basic::CreateAssetContract(
	const std::string & NYM_ID,
	const std::string & strXMLcontents
	)
{
	return OTAPI_Wrap::CreateAssetContract(
		NYM_ID,
		strXMLcontents
		);
}

long OTAPI_Basic::AddServerContract(const std::string & strContract)
{
	return OTAPI_Wrap::AddServerContract(
		strContract
		);
}

long OTAPI_Basic::AddAssetContract(const std::string & strContract)
{
	return OTAPI_Wrap::AddAssetContract(
		strContract
		);
}

long OTAPI_Basic::GetServerCount() { return OTAPI_Wrap::GetServerCount(); }
long OTAPI_Basic::GetAssetTypeCount() { return OTAPI_Wrap::GetAssetTypeCount(); }
long OTAPI_Basic::GetAccountCount() { return OTAPI_Wrap::GetAccountCount(); }
long OTAPI_Basic::GetNymCount() {
	long nNymCount = OTAPI_Wrap::GetNymCount();
	return nNymCount;
};

std::string OTAPI_Basic::GetServer_ID(const long & nIndex)
{
	return OTAPI_Wrap::GetServer_ID(
		nIndex
		);
}

std::string OTAPI_Basic::GetServer_Name(const std::string & SERVER_ID)
{
	return OTAPI_Wrap::GetServer_Name(
		SERVER_ID
		);
}

std::string OTAPI_Basic::GetServer_Contract(const std::string & SERVER_ID)
{
	return OTAPI_Wrap::GetServer_Contract(
		SERVER_ID
		);
}

std::string OTAPI_Basic::GetAssetType_ID(const long & nIndex)
{
	return OTAPI_Wrap::GetAssetType_ID(
		nIndex
		);
}

std::string OTAPI_Basic::GetAssetType_Name(const std::string & ASSET_TYPE_ID)
{
	return OTAPI_Wrap::GetAssetType_Name(
		ASSET_TYPE_ID
		);
}

std::string OTAPI_Basic::GetAssetType_Contract(const std::string & ASSET_TYPE_ID)
{
	return OTAPI_Wrap::GetAssetType_Contract(
		ASSET_TYPE_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_ID(const long & nIndex)
{
	return OTAPI_Wrap::GetAccountWallet_ID(
		nIndex
		);
}

std::string OTAPI_Basic::GetAccountWallet_Name(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_Name(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_Balance(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::GetAccountWallet_Balance(ACCOUNT_ID));
}

std::string OTAPI_Basic::GetAccountWallet_Type(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_Type(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_AssetTypeID(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_AssetTypeID(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_ServerID(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_ServerID(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_NymID(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_NymID(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_InboxHash(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_InboxHash(
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::GetAccountWallet_OutboxHash(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::GetAccountWallet_OutboxHash(
		ACCOUNT_ID
		);
}

bool OTAPI_Basic::VerifyAccountReceipt(
	const std::string & SERVER_ID,
	const std::string & NYM_ID,
	const std::string & ACCT_ID
	)
{
	return OTAPI_Wrap::VerifyAccountReceipt(
		SERVER_ID,
		NYM_ID,
		ACCT_ID
		);
}

long OTAPI_Basic::GetNym_TransactionNumCount(
	const std::string & SERVER_ID,
	const std::string & NYM_ID
	)
{
	return OTAPI_Wrap::GetNym_TransactionNumCount(
		SERVER_ID,
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_ID(const long & nIndex)
{
	return OTAPI_Wrap::GetNym_ID(
		nIndex
		);
}

std::string OTAPI_Basic::GetNym_Name(const std::string & NYM_ID)
{
	return OTAPI_Wrap::GetNym_Name(
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_Stats(const std::string & NYM_ID)
{
	return OTAPI_Wrap::GetNym_Stats(
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_NymboxHash(
	const std::string & SERVER_ID,
	const std::string & NYM_ID 
	)
{
	return OTAPI_Wrap::GetNym_NymboxHash(
		SERVER_ID,
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_RecentHash(
	const std::string & SERVER_ID,
	const std::string & NYM_ID
	)
{
	return OTAPI_Wrap::GetNym_RecentHash(
		SERVER_ID,
		NYM_ID
		);	
}

std::string OTAPI_Basic::GetNym_InboxHash(
	const std::string & ACCOUNT_ID,
	const std::string & NYM_ID
	)
{
	return OTAPI_Wrap::GetNym_InboxHash(
		ACCOUNT_ID,
		NYM_ID
		);		
}

std::string OTAPI_Basic::GetNym_OutboxHash(
	const std::string & ACCOUNT_ID,
	const std::string & NYM_ID
	)
{
	return OTAPI_Wrap::GetNym_OutboxHash(
		ACCOUNT_ID,
		NYM_ID
		);	
}

bool OTAPI_Basic::IsNym_RegisteredAtServer(const std::string & NYM_ID, const std::string & SERVER_ID)
{
	return OTAPI_Wrap::IsNym_RegisteredAtServer(
		NYM_ID,
		SERVER_ID
		);	
}

long OTAPI_Basic::GetNym_MailCount(const std::string & NYM_ID)
{
	return OTAPI_Wrap::GetNym_MailCount(
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_MailContentsByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_MailContentsByIndex(
		NYM_ID,
		nIndex
		);	
}

std::string OTAPI_Basic::GetNym_MailSenderIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_MailSenderIDByIndex(
		NYM_ID,
		nIndex
		);		
}

std::string OTAPI_Basic::GetNym_MailServerIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_MailServerIDByIndex(
		NYM_ID,
		nIndex
		);
}

bool OTAPI_Basic::Nym_RemoveMailByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_RemoveMailByIndex(
		NYM_ID,
		nIndex
		);
}

bool OTAPI_Basic::Nym_VerifyMailByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_VerifyMailByIndex(
		NYM_ID,
		nIndex
		);	
}

long OTAPI_Basic::GetNym_OutmailCount(const std::string & NYM_ID)
{
	return OTAPI_Wrap::GetNym_OutmailCount(
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_OutmailContentsByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutmailContentsByIndex(
		NYM_ID,
		nIndex
		);	
}

std::string OTAPI_Basic::GetNym_OutmailRecipientIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutmailRecipientIDByIndex(
		NYM_ID,
		nIndex
		);
}

std::string OTAPI_Basic::GetNym_OutmailServerIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutmailServerIDByIndex(
		NYM_ID,
		nIndex
		);
}

bool OTAPI_Basic::Nym_RemoveOutmailByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_RemoveOutmailByIndex(
		NYM_ID,
		nIndex
		);
}

bool OTAPI_Basic::Nym_VerifyOutmailByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_VerifyOutmailByIndex(
		NYM_ID,
		nIndex
		);	
}

long OTAPI_Basic::GetNym_OutpaymentsCount(const std::string & NYM_ID)
{
	return OTAPI_Wrap::GetNym_OutpaymentsCount(
		NYM_ID
		);
}

std::string OTAPI_Basic::GetNym_OutpaymentsContentsByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutpaymentsContentsByIndex(
		NYM_ID,
		nIndex
		);	
}

std::string OTAPI_Basic::GetNym_OutpaymentsRecipientIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutpaymentsRecipientIDByIndex(
		NYM_ID,
		nIndex
		);
}

std::string OTAPI_Basic::GetNym_OutpaymentsServerIDByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::GetNym_OutpaymentsServerIDByIndex(
		NYM_ID,
		nIndex
		);	
}

bool OTAPI_Basic::Nym_RemoveOutpaymentsByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_RemoveOutpaymentsByIndex(
		NYM_ID,
		nIndex
		);
}

bool OTAPI_Basic::Nym_VerifyOutpaymentsByIndex(
	const std::string & NYM_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Nym_VerifyOutpaymentsByIndex(
		NYM_ID,
		nIndex
		);	
}


bool  OTAPI_Basic::Wallet_ChangePassphrase() { return OTAPI_Wrap::Wallet_ChangePassphrase(); }

bool OTAPI_Basic::Wallet_CanRemoveServer(const std::string & SERVER_ID)
{
	return OTAPI_Wrap::Wallet_CanRemoveServer(
		SERVER_ID
		);
}

bool OTAPI_Basic::Wallet_RemoveServer(const std::string & SERVER_ID)
{
	return OTAPI_Wrap::Wallet_RemoveServer(
		SERVER_ID
		);
}

bool OTAPI_Basic::Wallet_CanRemoveAssetType(const std::string & ASSET_ID)
{
	return OTAPI_Wrap::Wallet_CanRemoveAssetType(
		ASSET_ID
		);
}

bool OTAPI_Basic::Wallet_RemoveAssetType(const std::string & ASSET_ID)
{
	return OTAPI_Wrap::Wallet_RemoveAssetType(
		ASSET_ID
		);
}

bool OTAPI_Basic::Wallet_CanRemoveNym(const std::string & NYM_ID)
{
	return OTAPI_Wrap::Wallet_RemoveAssetType(
		NYM_ID
		);
}

bool OTAPI_Basic::Wallet_RemoveNym(const std::string & NYM_ID)
{
	return OTAPI_Wrap::Wallet_RemoveNym(
		NYM_ID
		);
}

bool OTAPI_Basic::Wallet_CanRemoveAccount(const std::string & ACCOUNT_ID)
{
	return OTAPI_Wrap::Wallet_CanRemoveAccount(
		ACCOUNT_ID
		);
}


std::string OTAPI_Basic::Wallet_ExportNym(const std::string & NYM_ID)
{
	return OTAPI_Wrap::Wallet_ExportNym(NYM_ID);
}
std::string OTAPI_Basic::Wallet_ImportNym(const std::string & FILE_CONTENTS)
{
	return OTAPI_Wrap::Wallet_ImportNym(FILE_CONTENTS);
}
std::string OTAPI_Basic::Wallet_ImportCert(const std::string & DISPLAY_NAME, const std::string & FILE_CONTENTS)
{
	return OTAPI_Wrap::Wallet_ImportCert(DISPLAY_NAME, FILE_CONTENTS);
}
std::string OTAPI_Basic::Wallet_ExportCert(const std::string & NYM_ID)
{
	return OTAPI_Wrap::Wallet_ExportCert(NYM_ID);
}



std::string OTAPI_Basic::Wallet_GetNymIDFromPartial(const std::string & PARTIAL_ID)
{
	return OTAPI_Wrap::Wallet_GetNymIDFromPartial(
		PARTIAL_ID
		);
}

std::string OTAPI_Basic::Wallet_GetServerIDFromPartial(const std::string & PARTIAL_ID)
{
	return OTAPI_Wrap::Wallet_GetServerIDFromPartial(
		PARTIAL_ID
		);
}

std::string OTAPI_Basic::Wallet_GetAssetIDFromPartial(const std::string & PARTIAL_ID)
{
	return OTAPI_Wrap::Wallet_GetAssetIDFromPartial(
		PARTIAL_ID
		);
}

std::string OTAPI_Basic::Wallet_GetAccountIDFromPartial(const std::string & PARTIAL_ID)
{
	return OTAPI_Wrap::Wallet_GetAccountIDFromPartial(
		PARTIAL_ID
		);
}

bool OTAPI_Basic::SetNym_Name(
	const std::string & NYM_ID, 
	const std::string & SIGNER_NYM_ID, 
	const std::string & NYM_NEW_NAME
	)
{
	return OTAPI_Wrap::SetNym_Name(
		NYM_ID,
		SIGNER_NYM_ID,
		NYM_NEW_NAME
		);
}

bool OTAPI_Basic::SetAccountWallet_Name(
	const std::string & ACCT_ID, 
	const std::string & SIGNER_NYM_ID, 
	const std::string & ACCT_NEW_NAME
	)
{
	return OTAPI_Wrap::SetAccountWallet_Name(
		ACCT_ID,
		SIGNER_NYM_ID,
		ACCT_NEW_NAME
		);
}

bool OTAPI_Basic::SetAssetType_Name(
	const std::string & ASSET_ID, 
	const std::string & STR_NEW_NAME
	)
{
	return OTAPI_Wrap::SetAssetType_Name(
		ASSET_ID,
		STR_NEW_NAME
		);
}

bool OTAPI_Basic::SetServer_Name(
	const std::string & SERVER_ID, 
	const std::string & STR_NEW_NAME
	)
{
	return OTAPI_Wrap::SetServer_Name(
		SERVER_ID,
		STR_NEW_NAME
		);
}

std::string OTAPI_Basic::WriteCheque(
	const std::string & SERVER_ID,
	const std::string & CHEQUE_AMOUNT, 
	const std::string & VALID_FROM, 
	const std::string & VALID_TO,
	const std::string & SENDER_ACCT_ID,
	const std::string & SENDER_USER_ID,
	const std::string & CHEQUE_MEMO, 
	const std::string & RECIPIENT_USER_ID
	)
{
	//const int64_t lCHEQUE_AMOUNT = OTAPI_Wrap::StringToLong(CHEQUE_AMOUNT);
	//const int64_t lVALID_FROM	 = OTAPI_Wrap::StringToLong(VALID_FROM);
	//const int64_t lVALID_TO		 = OTAPI_Wrap::StringToLong(VALID_TO);

	return OTAPI_Wrap::WriteCheque(
		SERVER_ID,
		OTAPI_Wrap::StringToLong(CHEQUE_AMOUNT),
		OTAPI_Wrap::StringToLong(VALID_FROM),
		OTAPI_Wrap::StringToLong(VALID_TO),
		SENDER_ACCT_ID,
		SENDER_USER_ID,
		CHEQUE_MEMO,
		RECIPIENT_USER_ID
		);
}

bool OTAPI_Basic::DiscardCheque(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & THE_CHEQUE
	)
{
	return OTAPI_Wrap::DiscardCheque(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		THE_CHEQUE
		);
}

std::string OTAPI_Basic::ProposePaymentPlan(
		const std::string & SERVER_ID,
		const std::string & VALID_FROM,
		const std::string & VALID_TO,
		const std::string & SENDER_ACCT_ID,
		const std::string & SENDER_USER_ID,
		const std::string & PLAN_CONSIDERATION,
		const std::string & RECIPIENT_ACCT_ID,
		const std::string & RECIPIENT_USER_ID,
		const std::string & INITIAL_PAYMENT_AMOUNT,
		const std::string & INITIAL_PAYMENT_DELAY,
		const std::string & PAYMENT_PLAN_AMOUNT,
		const std::string & PAYMENT_PLAN_DELAY,
		const std::string & PAYMENT_PLAN_PERIOD,
		const std::string & PAYMENT_PLAN_LENGTH,
		const long & PAYMENT_PLAN_MAX_PAYMENTS
		)
{
	//const int64_t lVALID_FROM				= OTAPI_Wrap::StringToLong(VALID_FROM);
	//const int64_t lVALID_TO					= OTAPI_Wrap::StringToLong(VALID_TO);
	//const int64_t lINITIAL_PAYMENT_AMOUNT	= OTAPI_Wrap::StringToLong(INITIAL_PAYMENT_AMOUNT);
	//const int64_t lINITIAL_PAYMENT_DELAY	= OTAPI_Wrap::StringToLong(INITIAL_PAYMENT_DELAY);
	//const int64_t LPAYMENT_PLAN_AMOUNT		= OTAPI_Wrap::StringToLong(PAYMENT_PLAN_AMOUNT);
	//const int64_t lPAYMENT_PLAN_DELAY		= OTAPI_Wrap::StringToLong(PAYMENT_PLAN_DELAY);
	//const int64_t lPAYMENT_PLAN_PERIOD		= OTAPI_Wrap::StringToLong(PAYMENT_PLAN_PERIOD);
	//const int64_t lPAYMENT_PLAN_LENGTH		= OTAPI_Wrap::StringToLong(PAYMENT_PLAN_LENGTH);

	return OTAPI_Wrap::ProposePaymentPlan(
		SERVER_ID,
		OTAPI_Wrap::StringToLong(VALID_FROM),
		OTAPI_Wrap::StringToLong(VALID_TO),
		SENDER_ACCT_ID,
		SENDER_USER_ID,
		PLAN_CONSIDERATION,
		RECIPIENT_ACCT_ID,
		RECIPIENT_USER_ID,
		OTAPI_Wrap::StringToLong(INITIAL_PAYMENT_AMOUNT),
		OTAPI_Wrap::StringToLong(INITIAL_PAYMENT_DELAY),
		OTAPI_Wrap::StringToLong(PAYMENT_PLAN_AMOUNT),
		OTAPI_Wrap::StringToLong(PAYMENT_PLAN_DELAY),
		OTAPI_Wrap::StringToLong(PAYMENT_PLAN_PERIOD),
		OTAPI_Wrap::StringToLong(PAYMENT_PLAN_LENGTH),
		PAYMENT_PLAN_MAX_PAYMENTS
		);
}

std::string OTAPI_Basic::ConfirmPaymentPlan(
	const std::string & SERVER_ID,
	const std::string & SENDER_USER_ID,
	const std::string & SENDER_ACCT_ID,
	const std::string & RECIPIENT_USER_ID,
	const std::string & PAYMENT_PLAN
	)
{
	return OTAPI_Wrap::ConfirmPaymentPlan(
		SERVER_ID,
		SENDER_USER_ID,
		SENDER_ACCT_ID,
		RECIPIENT_USER_ID,
		PAYMENT_PLAN
		);
}

std::string OTAPI_Basic::Create_SmartContract(
	const std::string & SERVER_ID,
	const std::string & SIGNER_NYM_ID,
	const std::string & VALID_FROM,
	const std::string & VALID_TO
	)
{
	//const int64_t lVALID_FROM				= OTAPI_Wrap::StringToLong(VALID_FROM);
	//const int64_t lVALID_TO					= OTAPI_Wrap::StringToLong(VALID_TO);

	return OTAPI_Wrap::Create_SmartContract(
		SERVER_ID,
		SIGNER_NYM_ID,
		OTAPI_Wrap::StringToLong(VALID_FROM),
		OTAPI_Wrap::StringToLong(VALID_TO)
		);	
}

std::string OTAPI_Basic::SmartContract_AddBylaw(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & BYLAW_NAME
	)
{
	return OTAPI_Wrap::SmartContract_AddBylaw(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		BYLAW_NAME
		);
}

std::string OTAPI_Basic::SmartContract_AddClause(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & BYLAW_NAME,
	const std::string & CLAUSE_NAME,
	const std::string & SOURCE_CODE
	)
{
	return OTAPI_Wrap::SmartContract_AddClause(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		BYLAW_NAME,
		CLAUSE_NAME,
		SOURCE_CODE
		);
}

std::string OTAPI_Basic::SmartContract_AddVariable(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & BYLAW_NAME,
	const std::string & VAR_NAME,
	const std::string & VAR_ACCESS,
	const std::string & VAR_TYPE,
	const std::string & VAR_VALUE
	)
{
	return OTAPI_Wrap::SmartContract_AddVariable(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		BYLAW_NAME,
		VAR_NAME,
		VAR_ACCESS,
		VAR_TYPE,
		VAR_VALUE
		);
}

std::string OTAPI_Basic::SmartContract_AddCallback(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & BYLAW_NAME,
	const std::string & CALLBACK_NAME,
	const std::string & CLAUSE_NAME
	)
{
	return OTAPI_Wrap::SmartContract_AddCallback(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		BYLAW_NAME,
		CALLBACK_NAME,
		CLAUSE_NAME
		);
}

std::string OTAPI_Basic::SmartContract_AddHook(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & BYLAW_NAME,
	const std::string & HOOK_NAME,
	const std::string & CLAUSE_NAME
	)
{
	return OTAPI_Wrap::SmartContract_AddHook(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		BYLAW_NAME,
		HOOK_NAME,
		CLAUSE_NAME
		);
}

std::string OTAPI_Basic::SmartContract_AddParty(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & PARTY_NAME,
	const std::string & AGENT_NAME
	)
{
	return OTAPI_Wrap::SmartContract_AddParty(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		PARTY_NAME,
		AGENT_NAME
		);
}

std::string OTAPI_Basic::SmartContract_AddAccount(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & PARTY_NAME,
	const std::string & ACCT_NAME,
	const std::string & ASSET_TYPE_ID
	)
{
	return OTAPI_Wrap::SmartContract_AddAccount(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		PARTY_NAME,
		ACCT_NAME,
		ASSET_TYPE_ID
		);
}	

long OTAPI_Basic::SmartContract_CountNumsNeeded(
	const std::string & THE_CONTRACT,
	const std::string & AGENT_NAME
	)
{
	return OTAPI_Wrap::SmartContract_CountNumsNeeded(
		THE_CONTRACT,
		AGENT_NAME
		);
}

std::string OTAPI_Basic::SmartContract_ConfirmAccount(
	const std::string & THE_CONTRACT,
	const std::string & SIGNER_NYM_ID,
	const std::string & PARTY_NAME,
	const std::string & ACCT_NAME,
	const std::string & AGENT_NAME,
	const std::string & ACCT_ID
	)
{
	return OTAPI_Wrap::SmartContract_ConfirmAccount(
		THE_CONTRACT,
		SIGNER_NYM_ID,
		PARTY_NAME,
		ACCT_NAME,
		AGENT_NAME,
		ACCT_ID
		);
}

std::string OTAPI_Basic::SmartContract_ConfirmParty(
	const std::string & THE_CONTRACT,
	const std::string & PARTY_NAME,
	const std::string & NYM_ID
	)
{
	return OTAPI_Wrap::SmartContract_ConfirmParty(
		THE_CONTRACT,
		PARTY_NAME,
		NYM_ID
		);
}

long OTAPI_Basic::activateSmartContract(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_SMART_CONTRACT
	)
{
	return OTAPI_Wrap::activateSmartContract(
		SERVER_ID,
		USER_ID,
		THE_SMART_CONTRACT
		);
}

long OTAPI_Basic::triggerClause(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & TRANSACTION_NUMBER,
	const std::string & CLAUSE_NAME,
	const std::string & STR_PARAM
	)
{
	//const int64_t lTRANSACTION_NUMBER		= OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::triggerClause(
		SERVER_ID,
		USER_ID,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER),
		CLAUSE_NAME,
		STR_PARAM
		);
}

bool OTAPI_Basic::Msg_HarvestTransactionNumbers(
	const std::string & THE_MESSAGE,
	const std::string & USER_ID,
	const bool & bHarvestingForRetry,
	const bool & bReplyWasSuccess,
	const bool & bReplyWasFailure,
	const bool & bTransactionWasSuccess,
	const bool & bTransactionWasFailure
	)
{
	return OTAPI_Wrap::Msg_HarvestTransactionNumbers(
		THE_MESSAGE,
		USER_ID,
		bHarvestingForRetry,
		bReplyWasSuccess,
		bReplyWasFailure,
		bTransactionWasSuccess,
		bTransactionWasFailure
		);
}

std::string OTAPI_Basic::LoadUserPubkey(const std::string & USER_ID)
{
	return OTAPI_Wrap::LoadUserPubkey(
		USER_ID
		);
}

std::string OTAPI_Basic::LoadPubkey(const std::string & USER_ID)
{
	return OTAPI_Wrap::LoadPubkey(
		USER_ID
		);
}

bool OTAPI_Basic::VerifyUserPrivateKey(const std::string & USER_ID)
{
	return OTAPI_Wrap::VerifyUserPrivateKey(
		USER_ID
		);
}

std::string OTAPI_Basic::LoadPurse(
	const std::string & SERVER_ID,
	const std::string & ASSET_TYPE_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::LoadPurse(
		SERVER_ID,
		ASSET_TYPE_ID,
		USER_ID
		);
}

std::string OTAPI_Basic::LoadMint(
	const std::string & SERVER_ID,
	const std::string & ASSET_TYPE_ID)
{
	return OTAPI_Wrap::LoadMint(
		SERVER_ID,
		ASSET_TYPE_ID
		);
}

std::string OTAPI_Basic::LoadAssetContract(const std::string & ASSET_TYPE_ID)
{
	return OTAPI_Wrap::LoadAssetContract(
		ASSET_TYPE_ID
		);
}

std::string OTAPI_Basic::LoadServerContract(const std::string & SERVER_ID)
{
	return OTAPI_Wrap::LoadServerContract(
		SERVER_ID
		);			
}

bool OTAPI_Basic::Mint_IsStillGood(
	const std::string & SERVER_ID,
	const std::string & ASSET_TYPE_ID
	)
{
	return OTAPI_Wrap::Mint_IsStillGood(
		SERVER_ID,
		ASSET_TYPE_ID
		);
}

bool OTAPI_Basic::IsBasketCurrency(const std::string & ASSET_TYPE_ID)
{
	return OTAPI_Wrap::IsBasketCurrency(
		ASSET_TYPE_ID
		);
}

long OTAPI_Basic::Basket_GetMemberCount(const std::string & BASKET_ASSET_TYPE_ID)
{
	return OTAPI_Wrap::Basket_GetMemberCount(
		BASKET_ASSET_TYPE_ID
		);
}

std::string OTAPI_Basic::Basket_GetMemberType(
	const std::string & BASKET_ASSET_TYPE_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Basket_GetMemberType(
		BASKET_ASSET_TYPE_ID,
		nIndex
		);
}

std::string OTAPI_Basic::Basket_GetMinimumTransferAmount(const std::string & BASKET_ASSET_TYPE_ID)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Basket_GetMinimumTransferAmount(BASKET_ASSET_TYPE_ID));
}

std::string OTAPI_Basic::Basket_GetMemberMinimumTransferAmount(
	const std::string & BASKET_ASSET_TYPE_ID,
	const long & nIndex
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Basket_GetMemberMinimumTransferAmount(
		BASKET_ASSET_TYPE_ID,
		nIndex
		));
}

std::string OTAPI_Basic::LoadAssetAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadAssetAccount(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::LoadInbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadInbox(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::LoadOutbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadOutbox(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);				
}

std::string OTAPI_Basic::LoadInboxNoVerify(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadInboxNoVerify(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);				
}

std::string OTAPI_Basic::LoadOutboxNoVerify(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadOutboxNoVerify(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);					
}

std::string OTAPI_Basic::LoadPaymentInbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::LoadPaymentInbox(
		SERVER_ID,
		USER_ID
		);					
}

std::string OTAPI_Basic::LoadPaymentInboxNoVerify(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::LoadPaymentInboxNoVerify(
		SERVER_ID,
		USER_ID
		);				
}

std::string OTAPI_Basic::LoadRecordBox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadRecordBox(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);
}

std::string OTAPI_Basic::LoadRecordBoxNoVerify(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::LoadRecordBoxNoVerify(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);
}

long OTAPI_Basic::Ledger_GetCount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER
	)
{
	return OTAPI_Wrap::Ledger_GetCount(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER
		);
}

std::string OTAPI_Basic::Ledger_CreateResponse(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & ORIGINAL_LEDGER
	)
{
	return OTAPI_Wrap::Ledger_CreateResponse(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		ORIGINAL_LEDGER
		);
}

std::string OTAPI_Basic::Ledger_GetTransactionByIndex(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Ledger_GetTransactionByIndex(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER,
		nIndex
		);
}

std::string OTAPI_Basic::Ledger_GetTransactionByID(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER,
	const std::string & TRANSACTION_NUMBER
	)
{
	//const int64_t lTRANSACTION_NUMBER		= OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::Ledger_GetTransactionByID(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER)
		);
}

std::string OTAPI_Basic::Ledger_GetTransactionIDByIndex(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER,
	const long & nIndex
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Ledger_GetTransactionIDByIndex(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER,
		nIndex
		));
}

std::string OTAPI_Basic::Ledger_AddTransaction(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Ledger_AddTransaction(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_CreateResponse(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & RESPONSE_LEDGER,
	const std::string & ORIGINAL_TRANSACTION,
	const bool & BOOL_DO_I_ACCEPT
	)
{
	return OTAPI_Wrap::Transaction_CreateResponse(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		RESPONSE_LEDGER,
		ORIGINAL_TRANSACTION,
		BOOL_DO_I_ACCEPT
		);
}

std::string OTAPI_Basic::Ledger_FinalizeResponse(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER
	)
{
	return OTAPI_Wrap::Ledger_FinalizeResponse(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER
		);
}

std::string OTAPI_Basic::Ledger_GetInstrument(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_LEDGER,
	const long & nIndex
	)
{
	return OTAPI_Wrap::Ledger_GetInstrument(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_LEDGER,
		nIndex
		);
}

std::string OTAPI_Basic::Transaction_GetType(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetType(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::ReplyNotice_GetRequestNum(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::ReplyNotice_GetRequestNum(
		SERVER_ID,
		USER_ID,
		THE_TRANSACTION
		));
}

std::string OTAPI_Basic::Transaction_GetVoucher(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetVoucher(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

bool OTAPI_Basic::Transaction_GetSuccess(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetSuccess(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

bool OTAPI_Basic::Transaction_GetBalanceAgreementSuccess(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetBalanceAgreementSuccess(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetDateSigned(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Transaction_GetDateSigned(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		));
}

std::string OTAPI_Basic::Transaction_GetAmount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Transaction_GetAmount(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		));
}

std::string OTAPI_Basic::Pending_GetNote(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Pending_GetNote(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetSenderUserID(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetSenderUserID(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetSenderAcctID(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetSenderAcctID(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetRecipientUserID(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetRecipientUserID(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetRecipientAcctID(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::Transaction_GetRecipientAcctID(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		);
}

std::string OTAPI_Basic::Transaction_GetDisplayReferenceToNum(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_TRANSACTION
	)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Transaction_GetDisplayReferenceToNum(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_TRANSACTION
		));
}

bool OTAPI_Basic::SavePurse(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & USER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::SavePurse(SERVER_ID,ASSET_TYPE_ID,USER_ID,THE_PURSE);
	}

std::string OTAPI_Basic::CreatePurse(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & OWNER_ID,
		const std::string & SIGNER_ID
		)
	{
		return OTAPI_Wrap::CreatePurse(SERVER_ID,ASSET_TYPE_ID,OWNER_ID,SIGNER_ID);
	}


std::string OTAPI_Basic::CreatePurse_Passphrase(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & SIGNER_ID
		)
	{
		return OTAPI_Wrap::CreatePurse_Passphrase(SERVER_ID,ASSET_TYPE_ID,SIGNER_ID);
	}


std::string OTAPI_Basic::Purse_GetTotalValue(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::LongToString(OTAPI_Wrap::Purse_GetTotalValue(SERVER_ID,ASSET_TYPE_ID,THE_PURSE));
	}

long OTAPI_Basic::Purse_Count(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Purse_Count(SERVER_ID,ASSET_TYPE_ID,THE_PURSE);
	}


bool OTAPI_Basic::Purse_HasPassword(
		const std::string & SERVER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Purse_HasPassword(SERVER_ID,THE_PURSE);
	}

std::string OTAPI_Basic::Purse_Peek(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & OWNER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Purse_Peek(SERVER_ID,ASSET_TYPE_ID,OWNER_ID,THE_PURSE);
	}

std::string OTAPI_Basic::Purse_Pop(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & OWNER_OR_SIGNER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Purse_Pop(SERVER_ID,ASSET_TYPE_ID,OWNER_OR_SIGNER_ID,THE_PURSE);
	}

std::string OTAPI_Basic::Purse_Push(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & SIGNER_ID,
		const std::string & OWNER_ID,
		const std::string & THE_PURSE,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::Purse_Push(SERVER_ID,ASSET_TYPE_ID,SIGNER_ID,OWNER_ID,THE_PURSE,THE_TOKEN);
	}

std::string OTAPI_Basic::Purse_Empty(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & SIGNER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Purse_Empty(SERVER_ID,ASSET_TYPE_ID,SIGNER_ID,THE_PURSE);
	}


bool OTAPI_Basic::Wallet_ImportPurse(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & USER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::Wallet_ImportPurse(SERVER_ID,ASSET_TYPE_ID,USER_ID,THE_PURSE);
	}

long OTAPI_Basic::exchangePurse(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & USER_ID,
		const std::string & THE_PURSE
		)
	{
		return OTAPI_Wrap::exchangePurse(SERVER_ID,ASSET_TYPE_ID,USER_ID,THE_PURSE);
	}


std::string OTAPI_Basic::Token_ChangeOwner(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN,
		const std::string & SIGNER_NYM_ID,
		const std::string & OLD_OWNER,
		const std::string & NEW_OWNER
		)
	{
		return OTAPI_Wrap::Token_ChangeOwner(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN,SIGNER_NYM_ID,OLD_OWNER,NEW_OWNER);
	}

std::string OTAPI_Basic::Token_GetID(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::Token_GetID(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN);
	}

std::string OTAPI_Basic::Token_GetDenomination(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::LongToString(OTAPI_Wrap::Token_GetDenomination(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN));
	}

long OTAPI_Basic::Token_GetSeries(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::Token_GetSeries(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN);
	}


std::string OTAPI_Basic::Token_GetValidFrom(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::LongToString(OTAPI_Wrap::Token_GetValidFrom(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN));
	}

std::string OTAPI_Basic::Token_GetValidTo(
		const std::string & SERVER_ID,
		const std::string & ASSET_TYPE_ID,
		const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::LongToString(OTAPI_Wrap::Token_GetValidTo(SERVER_ID,ASSET_TYPE_ID,THE_TOKEN));
	}

std::string OTAPI_Basic::Token_GetAssetID(
	const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::Token_GetAssetID(THE_TOKEN);
	}

std::string OTAPI_Basic::Token_GetServerID(
	const std::string & THE_TOKEN
		)
	{
		return OTAPI_Wrap::Token_GetServerID(THE_TOKEN);
	}

std::string OTAPI_Basic::Instrmnt_GetAmount (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::LongToString(OTAPI_Wrap::Instrmnt_GetAmount(THE_INSTRUMENT)); }
std::string OTAPI_Basic::Instrmnt_GetTransNum (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::LongToString(OTAPI_Wrap::Instrmnt_GetTransNum(THE_INSTRUMENT)); }
std::string OTAPI_Basic::Instrmnt_GetValidFrom (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::LongToString(OTAPI_Wrap::Instrmnt_GetValidFrom(THE_INSTRUMENT)); }
std::string OTAPI_Basic::Instrmnt_GetValidTo (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::LongToString(OTAPI_Wrap::Instrmnt_GetValidTo(THE_INSTRUMENT)); }
std::string OTAPI_Basic::Instrmnt_GetMemo (const std::string & THE_INSTRUMENT)			{ return OTAPI_Wrap::Instrmnt_GetMemo(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetType (const std::string & THE_INSTRUMENT)			{ return OTAPI_Wrap::Instrmnt_GetType(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetServerID (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::Instrmnt_GetServerID(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetAssetID (const std::string & THE_INSTRUMENT)		{ return OTAPI_Wrap::Instrmnt_GetAssetID(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetSenderUserID (const std::string & THE_INSTRUMENT)	{ return OTAPI_Wrap::Instrmnt_GetSenderUserID(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetSenderAcctID (const std::string & THE_INSTRUMENT)	{ return OTAPI_Wrap::Instrmnt_GetSenderAcctID(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetRecipientUserID(const std::string & THE_INSTRUMENT) { return OTAPI_Wrap::Instrmnt_GetRecipientUserID(THE_INSTRUMENT); }
std::string OTAPI_Basic::Instrmnt_GetRecipientAcctID(const std::string & THE_INSTRUMENT) { return OTAPI_Wrap::Instrmnt_GetRecipientAcctID(THE_INSTRUMENT); }

long OTAPI_Basic::checkServerID(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::checkServerID(
		SERVER_ID,
		USER_ID
		);
}


long OTAPI_Basic::createUserAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::createUserAccount(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::deleteUserAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::deleteUserAccount(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::deleteAssetAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID
	)
{
	return OTAPI_Wrap::deleteAssetAccount(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID
		);
}

long OTAPI_Basic::usageCredits(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & USER_ID_CHECK,
	const std::string & ADJUSTMENT
	)
{
	return OTAPI_Wrap::usageCredits(
		SERVER_ID,
		USER_ID,
		USER_ID_CHECK,
		OTAPI_Wrap::StringToLong(ADJUSTMENT)
		);
}

std::string OTAPI_Basic::Message_GetUsageCredits(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::LongToString(OTAPI_Wrap::Message_GetUsageCredits(
		THE_MESSAGE
		));
}

long OTAPI_Basic::checkUser(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & USER_ID_CHECK
	)
{
	return OTAPI_Wrap::checkUser(
		SERVER_ID,
		USER_ID,
		USER_ID_CHECK
		);
}

long OTAPI_Basic::sendUserMessage(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & USER_ID_RECIPIENT,
	const std::string & RECIPIENT_PUBKEY,
	const std::string & THE_MESSAGE
	)
{
	return OTAPI_Wrap::sendUserMessage(
		SERVER_ID,
		USER_ID,
		USER_ID_RECIPIENT,
		RECIPIENT_PUBKEY,
		THE_MESSAGE
		);
}

long OTAPI_Basic::sendUserInstrument(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & USER_ID_RECIPIENT,
	const std::string & RECIPIENT_PUBKEY,
	const std::string & THE_INSTRUMENT
	)
{
	return OTAPI_Wrap::sendUserInstrument(
		SERVER_ID,
		USER_ID,
		USER_ID_RECIPIENT,
		RECIPIENT_PUBKEY,
		THE_INSTRUMENT
		);
}

long OTAPI_Basic::getRequest(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::getRequest(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::getTransactionNumber(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::getTransactionNumber(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::issueAssetType(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_CONTRACT
	)
{
	return OTAPI_Wrap::issueAssetType(
		SERVER_ID,
		USER_ID,
		THE_CONTRACT
		);
}

long OTAPI_Basic::getContract(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ASSET_ID
	)
{
	return OTAPI_Wrap::getContract(
		SERVER_ID,
		USER_ID,
		ASSET_ID
		);
}

long OTAPI_Basic::getMint(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ASSET_ID
	)
{
	return OTAPI_Wrap::getMint(
		SERVER_ID,
		USER_ID,
		ASSET_ID
		);
}

long OTAPI_Basic::createAssetAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ASSET_ID
	)
{
	return OTAPI_Wrap::createAssetAccount(
		SERVER_ID,
		USER_ID,
		ASSET_ID
		);
}

long OTAPI_Basic::getAccount(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID
	)
{
	return OTAPI_Wrap::getAccount(
		SERVER_ID,
		USER_ID,
		ACCT_ID
		);
}

std::string OTAPI_Basic::GenerateBasketCreation(
	const std::string & USER_ID,
	const std::string & MINIMUM_TRANSFER
	)
{
	//const int64_t lMINIMUM_TRANSFER = OTAPI_Wrap::StringToLong(MINIMUM_TRANSFER);

	return OTAPI_Wrap::GenerateBasketCreation(
		USER_ID,
		OTAPI_Wrap::StringToLong(MINIMUM_TRANSFER)
		);
}

std::string OTAPI_Basic::AddBasketCreationItem(
	const std::string & USER_ID,
	const std::string & THE_BASKET,
	const std::string & ASSET_TYPE_ID,
	const std::string & MINIMUM_TRANSFER
	)
{
	//const int64_t lMINIMUM_TRANSFER = OTAPI_Wrap::StringToLong(MINIMUM_TRANSFER);

	return OTAPI_Wrap::AddBasketCreationItem(
		USER_ID,
		THE_BASKET,
		ASSET_TYPE_ID,
		OTAPI_Wrap::StringToLong(MINIMUM_TRANSFER)
		);	
}

long OTAPI_Basic::issueBasket(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_BASKET
	)
{
	return OTAPI_Wrap::issueBasket(
		SERVER_ID,
		USER_ID,
		THE_BASKET
		);
}

std::string OTAPI_Basic::GenerateBasketExchange(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & BASKET_ASSET_TYPE_ID,
	const std::string & BASKET_ASSET_ACCT_ID,
	// -------------------------------------
	const long & TRANSFER_MULTIPLE
	)
{
	return OTAPI_Wrap::GenerateBasketExchange(
		SERVER_ID,
		USER_ID,
		BASKET_ASSET_TYPE_ID,
		BASKET_ASSET_ACCT_ID,
		TRANSFER_MULTIPLE
		);
}

std::string OTAPI_Basic::AddBasketExchangeItem(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_BASKET, 
	const std::string & ASSET_TYPE_ID,
	const std::string & ASSET_ACCT_ID
	)
{
	return OTAPI_Wrap::AddBasketExchangeItem(
		SERVER_ID,
		USER_ID,
		THE_BASKET,
		ASSET_TYPE_ID,
		ASSET_ACCT_ID
		);
}

long OTAPI_Basic::exchangeBasket(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & BASKET_ASSET_ID,
	const std::string & THE_BASKET,
	const bool & BOOL_EXCHANGE_IN_OR_OUT
	)
{
	return OTAPI_Wrap::exchangeBasket(
		SERVER_ID,
		USER_ID,
		BASKET_ASSET_ID,
		THE_BASKET,
		BOOL_EXCHANGE_IN_OR_OUT
		);
}

long OTAPI_Basic::notarizeWithdrawal(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & AMOUNT
	)
{
	return OTAPI_Wrap::notarizeWithdrawal(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		OTAPI_Wrap::StringToLong(AMOUNT)
		);
}

long OTAPI_Basic::notarizeDeposit(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & THE_PURSE
	)
{
	return OTAPI_Wrap::notarizeDeposit(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		THE_PURSE
		);
}

long OTAPI_Basic::notarizeTransfer(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_FROM,
	const std::string & ACCT_TO,
	const std::string & AMOUNT,
	const std::string & NOTE
	)
{
	//const int64_t lAMOUNT = OTAPI_Wrap::StringToLong(AMOUNT);

	return OTAPI_Wrap::notarizeTransfer(
		SERVER_ID,
		USER_ID,
		ACCT_FROM,
		ACCT_TO,
		OTAPI_Wrap::StringToLong(AMOUNT),
		NOTE
		);
}

long OTAPI_Basic::getInbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID
	)
{
	return OTAPI_Wrap::getInbox(
		SERVER_ID,
		USER_ID,
		ACCT_ID
		);
}

long OTAPI_Basic::getOutbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID
	)
{
	return OTAPI_Wrap::getOutbox(
		SERVER_ID,
		USER_ID,
		ACCT_ID
		);
}

long OTAPI_Basic::getNymbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::getNymbox(
		SERVER_ID,
		USER_ID
		);
}

std::string OTAPI_Basic::LoadNymbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::LoadNymbox(
		SERVER_ID,
		USER_ID
		);				
}

std::string OTAPI_Basic::LoadNymboxNoVerify(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::LoadNymboxNoVerify(
		SERVER_ID,
		USER_ID
		);	
}

std::string OTAPI_Basic::Nymbox_GetReplyNotice(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & REQUEST_NUMBER
	)
{
	//const int64_t lREQUEST_NUMBER = OTAPI_Wrap::StringToLong(REQUEST_NUMBER);

	return OTAPI_Wrap::Nymbox_GetReplyNotice(
		SERVER_ID,
		USER_ID,
		OTAPI_Wrap::StringToLong(REQUEST_NUMBER)
		);	
}

bool OTAPI_Basic::HaveAlreadySeenReply(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & REQUEST_NUMBER
	)
{
	//const int64_t lREQUEST_NUMBER = OTAPI_Wrap::StringToLong(REQUEST_NUMBER);

	return OTAPI_Wrap::HaveAlreadySeenReply(
		SERVER_ID,
		USER_ID,
		OTAPI_Wrap::StringToLong(REQUEST_NUMBER)
		);
}

long OTAPI_Basic::getBoxReceipt(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const long & nBoxType,
	const std::string & TRANSACTION_NUMBER
	)
{
	//const int64_t lTRANSACTION_NUMBER = OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::getBoxReceipt(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		nBoxType,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER)
		);
}

bool OTAPI_Basic::DoesBoxReceiptExist(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const long & nBoxType,
	const std::string & TRANSACTION_NUMBER
	)
{
	//const int64_t lTRANSACTION_NUMBER = OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::DoesBoxReceiptExist(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		nBoxType,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER)
		);
}
long OTAPI_Basic::processInbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & ACCT_LEDGER
	)
{
	return OTAPI_Wrap::processInbox(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		ACCT_LEDGER
		);
}

long OTAPI_Basic::processNymbox(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::processNymbox(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::withdrawVoucher(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & RECIPIENT_USER_ID,
	const std::string & CHEQUE_MEMO,
	const std::string & AMOUNT
	)
{
	//const int64_t lAMOUNT = OTAPI_Wrap::StringToLong(AMOUNT);

	return OTAPI_Wrap::withdrawVoucher(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		RECIPIENT_USER_ID,
		CHEQUE_MEMO,
		OTAPI_Wrap::StringToLong(AMOUNT)
		);
}

long OTAPI_Basic::payDividend(
	const std::string & SERVER_ID,
	const std::string & ISSUER_USER_ID,
	const std::string & DIVIDEND_FROM_ACCT_ID,
	const std::string & SHARES_ASSET_TYPE_ID,
	const std::string & DIVIDEND_MEMO,
	const std::string & AMOUNT_PER_SHARE
	)
{
	//const int64_t lAMOUNT_PER_SHARE = OTAPI_Wrap::StringToLong(AMOUNT_PER_SHARE);

	return OTAPI_Wrap::payDividend(
		SERVER_ID,
		ISSUER_USER_ID,
		DIVIDEND_FROM_ACCT_ID,
		SHARES_ASSET_TYPE_ID,
		DIVIDEND_MEMO,
		OTAPI_Wrap::StringToLong(AMOUNT_PER_SHARE)
		);
}

long OTAPI_Basic::depositCheque(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCT_ID,
	const std::string & THE_CHEQUE
	)
{
	return OTAPI_Wrap::depositCheque(
		SERVER_ID,
		USER_ID,
		ACCT_ID,
		THE_CHEQUE
		);
}

long OTAPI_Basic::depositPaymentPlan(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_PAYMENT_PLAN
	)
{
	return OTAPI_Wrap::depositPaymentPlan(
		SERVER_ID,
		USER_ID,
		THE_PAYMENT_PLAN
		);
}

long OTAPI_Basic::issueMarketOffer(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ASSET_TYPE_ID,
	const std::string & ASSET_ACCT_ID,
	const std::string & CURRENCY_TYPE_ID,
	const std::string & CURRENCY_ACCT_ID,
	const std::string & MARKET_SCALE,
	const std::string & MINIMUM_INCREMENT,
	const std::string & TOTAL_ASSETS_ON_OFFER,
	const std::string & PRICE_LIMIT,
	const bool & bBuyingOrSelling
	)
{

	return OTAPI_Wrap::issueMarketOffer(
		SERVER_ID,
		USER_ID,
		ASSET_TYPE_ID,
		ASSET_ACCT_ID,
		CURRENCY_TYPE_ID,
		CURRENCY_ACCT_ID,
		OTAPI_Wrap::StringToLong(MARKET_SCALE),
		OTAPI_Wrap::StringToLong(MINIMUM_INCREMENT),
		OTAPI_Wrap::StringToLong(TOTAL_ASSETS_ON_OFFER),
		OTAPI_Wrap::StringToLong(PRICE_LIMIT),
		bBuyingOrSelling
		);
}

long OTAPI_Basic::getMarketList(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::getMarketList(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::getMarketOffers(
	const std::string & SERVER_ID,
	const std::string & USER_ID, 
	const std::string & MARKET_ID,
	const std::string & MAX_DEPTH
	)
{
	//const int64_t lMAX_DEPTH = OTAPI_Wrap::StringToLong(MAX_DEPTH);

	return OTAPI_Wrap::getMarketOffers(
		SERVER_ID,
		USER_ID,
		MARKET_ID,
		OTAPI_Wrap::StringToLong(MAX_DEPTH)
		);
}

long OTAPI_Basic::getMarketRecentTrades(
	const std::string & SERVER_ID,
	const std::string & USER_ID, 
	const std::string & MARKET_ID
	)
{
	return OTAPI_Wrap::getMarketRecentTrades(
		SERVER_ID,
		USER_ID,
		MARKET_ID
		);
}

long OTAPI_Basic::getNym_MarketOffers(
	const std::string & SERVER_ID,
	const std::string & USER_ID
	)
{
	return OTAPI_Wrap::getNym_MarketOffers(
		SERVER_ID,
		USER_ID
		);
}

long OTAPI_Basic::cancelMarketOffer(
	const std::string & SERVER_ID, 
	const std::string & USER_ID, 
	const std::string & ASSET_ACCT_ID, 
	const std::string & TRANSACTION_NUMBER
	)
{
	//const int64_t lTRANSACTION_NUMBER = OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::cancelMarketOffer(
		SERVER_ID,
		USER_ID,
		ASSET_ACCT_ID,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER)
		);
}

long OTAPI_Basic::cancelPaymentPlan(
	const std::string & SERVER_ID, 
	const std::string & USER_ID, 
	const std::string & FROM_ACCT_ID, 
	const std::string & TRANSACTION_NUMBER
	)
{
	//const int64_t lTRANSACTION_NUMBER = OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER);

	return OTAPI_Wrap::cancelPaymentPlan(
		SERVER_ID,
		USER_ID,
		FROM_ACCT_ID,
		OTAPI_Wrap::StringToLong(TRANSACTION_NUMBER)
		);	
}

std::string OTAPI_Basic::PopMessageBuffer(
	const std::string & REQUEST_NUMBER,
	const std::string & SERVER_ID, 
	const std::string & USER_ID
	)
{
	//const int64_t lREQUEST_NUMBER = OTAPI_Wrap::StringToLong(REQUEST_NUMBER);

	return OTAPI_Wrap::PopMessageBuffer(
		OTAPI_Wrap::StringToLong(REQUEST_NUMBER),
		SERVER_ID,
		USER_ID
		);
}

void OTAPI_Basic::FlushMessageBuffer()
{
	return OTAPI_Wrap::FlushMessageBuffer();
}

std::string OTAPI_Basic::GetSentMessage(
	const std::string & REQUEST_NUMBER,
	const std::string & SERVER_ID, 
	const std::string & USER_ID
	)
{	
	//const int64_t lREQUEST_NUMBER = OTAPI_Wrap::StringToLong(REQUEST_NUMBER);

	return OTAPI_Wrap::GetSentMessage(
		OTAPI_Wrap::StringToLong(REQUEST_NUMBER),
		SERVER_ID,
		USER_ID
		);	
}

bool OTAPI_Basic::RemoveSentMessage(
	const std::string & REQUEST_NUMBER,
	const std::string & SERVER_ID, 
	const std::string & USER_ID
	)
{	
	//const int64_t lREQUEST_NUMBER = OTAPI_Wrap::StringToLong(REQUEST_NUMBER);

	return OTAPI_Wrap::RemoveSentMessage(
		OTAPI_Wrap::StringToLong(REQUEST_NUMBER),
		SERVER_ID,
		USER_ID
		);
}

void OTAPI_Basic::FlushSentMessages(
	const bool & bHarvestingForRetry,
	const std::string & SERVER_ID, 
	const std::string & USER_ID,
	const std::string & THE_NYMBOX
	)
{
	return OTAPI_Wrap::FlushSentMessages(
		bHarvestingForRetry,
		SERVER_ID,
		USER_ID,
		THE_NYMBOX
		);
}

void OTAPI_Basic::Sleep(const std::string & MILLISECONDS)
{
	//const int64_t lMILLISECONDS = OTAPI_Wrap::StringToLong(MILLISECONDS);

	return OTAPI_Wrap::Sleep(
		OTAPI_Wrap::StringToLong(MILLISECONDS)
		//MILLISECONDS
		);
}

bool OTAPI_Basic::ResyncNymWithServer(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & THE_MESSAGE
	)
{
	return OTAPI_Wrap::ResyncNymWithServer(
		SERVER_ID,
		USER_ID,
		THE_MESSAGE
		);
}

std::string OTAPI_Basic::Message_GetCommand(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetCommand(
		THE_MESSAGE
		);		
}

long OTAPI_Basic::Message_GetSuccess(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetSuccess(
		THE_MESSAGE
		);	
}

long OTAPI_Basic::queryAssetTypes(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ENCODED_MAP
	)
{
	return OTAPI_Wrap::queryAssetTypes(
		SERVER_ID,
		USER_ID,
		ENCODED_MAP
		);	
}

std::string OTAPI_Basic::Message_GetPayload(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetPayload(
		THE_MESSAGE
		);		
}

long OTAPI_Basic::Message_GetDepth(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetDepth(
		THE_MESSAGE
		);
}

long OTAPI_Basic::Message_GetTransactionSuccess(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_MESSAGE
	)
{
	return OTAPI_Wrap::Message_GetTransactionSuccess(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_MESSAGE
		);
}

long OTAPI_Basic::Message_GetBalanceAgreementSuccess(
	const std::string & SERVER_ID,
	const std::string & USER_ID,
	const std::string & ACCOUNT_ID,
	const std::string & THE_MESSAGE
	)
{
	return OTAPI_Wrap::Message_GetBalanceAgreementSuccess(
		SERVER_ID,
		USER_ID,
		ACCOUNT_ID,
		THE_MESSAGE
		);
}

std::string OTAPI_Basic::Message_GetLedger(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetLedger(
		THE_MESSAGE
		);			
}

std::string OTAPI_Basic::Message_GetNewAssetTypeID(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetNewAssetTypeID(
		THE_MESSAGE
		);	
}

std::string OTAPI_Basic::Message_GetNewIssuerAcctID(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetNewIssuerAcctID(
		THE_MESSAGE
		);
}

std::string OTAPI_Basic::Message_GetNewAcctID(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetNewAcctID(
		THE_MESSAGE
		);
}

std::string OTAPI_Basic::Message_GetNymboxHash(const std::string & THE_MESSAGE)
{
	return OTAPI_Wrap::Message_GetNymboxHash(
		THE_MESSAGE
		);
}

bool OTAPI_Basic::ConnectServer(
	const std::string & SERVER_ID,
	const std::string & USER_ID, 
	const std::string & strCA_FILE,
	const std::string & strKEY_FILE, 
	const std::string & strKEY_PASSWORD
	)
{
	return OTAPI_Wrap::ConnectServer(
		SERVER_ID,
		USER_ID,
		strCA_FILE,
		strKEY_FILE,
		strKEY_PASSWORD
		);
}

bool OTAPI_Basic::ProcessSockets()
{
	return OTAPI_Wrap::ProcessSockets();
}
