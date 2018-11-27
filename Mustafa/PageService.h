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
	std::string Encrypt_CesarCode(std::string text, std::string hook);
	std::string Encrypt_MorseCode(std::string text);
	std::string Encrypt_NumberCode(std::string text);
	std::string Encrypt_RSACode(std::string text);
	std::string Encrypt_RSA2Code(std::string text);
	std::string Encrypt_AlphaCode(std::string text);
	std::string Decrypt_CesarCode(std::string text, std::string hook);
	std::string Decrypt_MorseCode(std::string text);
	std::string Decrypt_NumberCode(std::string text);
	std::string Decrypt_RSACode(std::string text);
	std::string Decrypt_RSA2Code(std::string text);
	std::string Decrypt_AlphaCode(std::string text);
};

