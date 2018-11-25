#pragma once
#include"CesarCode.h"
#include"MorseCode.h"
#include"NumberCode.h"
#include"RSA.h"
#include "RSA2.0.h"
#include "AlphaCode.h"
ref class PageService
{
public:
	PageService();

	/**
	Encrypt
	*/

	std::string Encrypt_CesarCode(std::string text)
	{
		CesarCode code(4);
		return code.Encrypt(text);
	}
	std::string Encrypt_MorseCode(std::string text)
	{
		MorseCode code;
		return code.Encrypt(text);
	}
	std::string Encrypt_NumberCode(std::string text)
	{
		NumberCode code;
		return code.Encrypt(text);
	}
	std::string Encrypt_RSACode(std::string text)
	{
		RSA code;
		return code.Encrypt(text);
	}
	std::string Encrypt_RSA2Code(std::string text)
	{
		RSA2_0 code;
		return code.Encrypt(text);
	}
	std::string Encrypt_AlphaCode(std::string text)
	{
		AlphaCode code;
		return code.Encrypt(text);
	}

	/**
	Decrypt
	*/

	std::string Decrypt_CesarCode(std::string text)
	{
		CesarCode code(4);
		return code.Decrypt(text);
	}
	std::string Decrypt_MorseCode(std::string text)
	{
		MorseCode code;
		return code.Decrypt(text);
	}
	std::string Decrypt_NumberCode(std::string text)
	{
		NumberCode code;
		return code.Decrypt(text);
	}
	std::string Decrypt_RSACode(std::string text)
	{
		RSA code;
		return code.Decrypt(text);
	}
	std::string Decrypt_RSA2Code(std::string text)
	{
		RSA2_0 code;
		return code.Decrypt(text);
	}
	std::string Decrypt_AlphaCode(std::string text)
	{
		AlphaCode code;
		return code.Decrypt(text);
	}
	
};

