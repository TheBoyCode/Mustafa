#include "ValidateService.h"



ValidateService::ValidateService()
{
}
bool ValidateService::isToNumberCode(std::string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] < 0)return false;
	}
	return true;
}
bool ValidateService::IsKeyCesar(std::string text)
{
	if (text.length() < 1)return false;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] < 48 || text[i]>57)return false;
	}
	return true;
}
bool ValidateService::isMorseCode(std::string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '.' || text[i] == '-' || text[i] == ' ') {}
		else return false;
	}
	return true;
}
bool ValidateService::isText(std::string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90)){}
		else if ((text[i] == 32)){}
		else return false;
	}
	return true;
}
bool ValidateService::isToOrFromCesarCode(std::string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90)){}
		else if (text[i] == 32) {}
		else return false;
	}
	return true;
}
bool ValidateService::isNumberCode(std::string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 48 && text[i] <= 57) {}
		else return false;
	}
	return true;
}
bool ValidateService::isRsa(std::string text)
{
	int count = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '.')count++;
	}
	if ((count * 4) > text.length()) return true;
	return false;
}
std::string ValidateService::IsLogin(std::string login)
{
	if (login.length() < 6) { return "Занадто короткий логін"; }
	if (login.length() > 13) { return "Занадто довгий логін"; }
	for (int i = 0; i < login.length(); i++)
	{
		if (login[i] == ' ') return "Логін не має містити пробілів";
	}
	return "+";
}
std::string ValidateService::IsPassword(std::string password)
{
	if (password.length() < 6) { return "Занадто короткий пароль"; }
	if (password.length() > 13) { return "Занадто довгий пароль"; }
	for (int i = 0; i < password.length(); i++)
	{
		if (password[i] == ' ') return "Пароль не має містити пробілів";
		if (password[i] == '№' || password[i] == '$' || password[i] == '@' ||
			password[i] == '*' || password[i] == '^' || password[i] == '&' ||
			password[i] == '%' || password[i] == '!' || password[i] == '?'
			) return "Пароль не має містити спец. символів";
	}
	return "+";
}
std::string ValidateService::IsEmail(std::string email)
{
	if (email.length() < 4)return "Електронна пошта не вірна";
	bool isMail = false;
	bool isPoint = false;
	for (int i = 0; i < email.length(); i++)
	{
		if (email[i] == '@')isMail = true;
		if (email[i] == '.')isPoint = true;
	}
	if (!isMail && !isPoint)return "Електронна пошта не вірна";
	return "+";
}
std::string ValidateService::IsAge(std::string age)
{
	if (age.length() < 1)return "Введіть число";
	if (age.length() > 3)return "Завелике число";
	for (int i = 0; i < age.length(); i++)
	{
		if (age[i] < 48 || age[i]>57)return "Введіть число";
	}
	return "+";
}