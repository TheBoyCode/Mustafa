#pragma once
#include <string>
ref class ValidateService
{
public:
	ValidateService();
	bool IsKeyCesar(std::string text);
	bool isMorseCode(std::string text);
	bool isText(std::string text);
	bool isToOrFromCesarCode(std::string text);
	bool isNumberCode(std::string text);
	bool isRsa(std::string text);
	bool isToNumberCode(std::string text);
	std::string IsLogin(std::string login);
	std::string IsPassword(std::string password);
	std::string IsEmail(std::string email);
	std::string IsAge(std::string age);
};

