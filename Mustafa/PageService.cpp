#include "PageService.h"



PageService::PageService()
{
}

std::string PageService::Encrypt_CesarCode(std::string text, std::string hook)
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
std::string PageService::Encrypt_MorseCode(std::string text)
{
	if (service.isText(text))
	{
		MorseCode code;
		return code.Encrypt(text);
	}
	else return "";
}
std::string PageService::Encrypt_NumberCode(std::string text)
{
	if (service.isToNumberCode(text))
	{
		NumberCode code;
		return code.Encrypt(text);
	}
	else return "";
}
std::string PageService::Encrypt_RSACode(std::string text)
{
	if (service.isText(text))
	{
		RSA code;
		return code.Encrypt(text);
	}
	else return "";
}
std::string PageService::Encrypt_RSA2Code(std::string text)
{
	if (service.isText(text))
	{
		RSA2_0 code;
		return code.Encrypt(text);
	}
	else return "";
}
std::string PageService::Encrypt_AlphaCode(std::string text)
{
	if (service.isText(text))
	{
		AlphaCode code;
		return code.Encrypt(text);
	}
	else return "";
}
std::string PageService::Decrypt_CesarCode(std::string text, std::string hook)
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
std::string PageService::Decrypt_MorseCode(std::string text)
{
	if (service.isMorseCode(text))
	{
		MorseCode code;
		return code.Decrypt(text);
	}
	else return "";
}
std::string PageService::Decrypt_NumberCode(std::string text)
{
	if (service.isNumberCode(text))
	{
		NumberCode code;
		return code.Decrypt(text);
	}
	else return "";
}
std::string PageService::Decrypt_RSACode(std::string text)
{
	if (service.isRsa(text))
	{
		RSA code;
		return code.Decrypt(text);
	}
	else return "";
}
std::string PageService::Decrypt_RSA2Code(std::string text)
{
	if (service.isRsa(text))
	{
		RSA2_0 code;
		return code.Decrypt(text);
	}
	else return "";
}
std::string PageService::Decrypt_AlphaCode(std::string text)
{
	if (service.isText(text))
	{
		AlphaCode code;
		return code.Decrypt(text);
	}
	else return "";
}
