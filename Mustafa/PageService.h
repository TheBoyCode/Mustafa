#pragma once
#include"CesarCode.h"
#include"MorseCode.h"
#include"NumberCode.h"
#include"RSA.h"
#include "RSA2.0.h"
#include "AlphaCode.h"
#include "ValidateService.h"
ref class PageService
{
private : 
	ValidateService service;
public:
	PageService();

	/**
	Encrypt
	*/

	std::string Encrypt_CesarCode(std::string text,std::string hook)
	{
		int DigitHook;
		if (service.IsKeyCesar(hook) && service.isToOrFromCesarCode(text))
		{
			DigitHook = std::stoi(hook);
			CesarCode code(DigitHook);
			return code.Encrypt(text);
		}
		return "";
	}
	std::string Encrypt_MorseCode(std::string text)
	{
		if (service.isText(text))
		{
			MorseCode code;
			return code.Encrypt(text);
		}
		else return "";
	}
	std::string Encrypt_NumberCode(std::string text)
	{
		NumberCode code;
		return code.Encrypt(text);
	}
	std::string Encrypt_RSACode(std::string text)
	{
		if (service.isText(text))
		{
			RSA code;
			return code.Encrypt(text);
		}
		else return "";
		
	}
	std::string Encrypt_RSA2Code(std::string text)
	{
		if (service.isText(text))
		{
			RSA2_0 code;
			return code.Encrypt(text);
		}
		else return "";
	}
	std::string Encrypt_AlphaCode(std::string text)
	{
		if (service.isText(text))
		{
			AlphaCode code;
			return code.Encrypt(text);
		}
		else return "";
	}

	/**
	Decrypt
	*/

	std::string Decrypt_CesarCode(std::string text,std::string hook)
	{
		int DigitHook;
		if (service.IsKeyCesar(hook) && service.isToOrFromCesarCode(text))
		{
			DigitHook = std::stoi(hook);
			CesarCode code(DigitHook);
			return code.Decrypt(text);
		}
		return "";
	}
	std::string Decrypt_MorseCode(std::string text)
	{
		if (service.isMorseCode(text))
		{
			MorseCode code;
			return code.Decrypt(text);
		}
		else return "";
	}
	std::string Decrypt_NumberCode(std::string text)
	{
		if (service.isNumberCode(text))
		{
			NumberCode code;
			return code.Decrypt(text);
		}
		else return "";
	}
	std::string Decrypt_RSACode(std::string text)
	{
		if (service.isRsa(text))
		{
			RSA code;
			return code.Decrypt(text);
		}
		else return "";
		
	}
	std::string Decrypt_RSA2Code(std::string text)
	{
		if(service.isRsa(text))
		{
			RSA2_0 code;
			return code.Decrypt(text);
		}
		else return "";
	}
	std::string Decrypt_AlphaCode(std::string text)
	{
		if (service.isText(text))
		{
			AlphaCode code;
			return code.Decrypt(text);
		}
		else return "";
	}
	
};

