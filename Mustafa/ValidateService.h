#pragma once
#include <string>
ref class ValidateService
{
public:
	ValidateService();
	bool IsKeyCesar(std::string text)
	{
		if (text.length() < 1)return false;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] < 48 || text[i]>57)return false;
		}
		return true;
	}
	bool isMorseCode(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == '.' || text[i] == '-' || text[i] == ' ') {}
			else return false;
		}
		return true;
	}
	bool isText(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90) )
			{

			}
			else if ((text[i] == 32)) 
			{

			}
			else return false;
		}
		return true;
	}
	bool isToOrFromCesarCode(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90) )
			{}
			else return false;
		}
		return true;
	}
	bool isNumberCode(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] >= 48 && text[i] <= 57) {}
			else return false;
		}
		return true;
	}
	bool isRsa(std::string text)
	{
		int count = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == '.')count++;
		}
		if ((count * 4) > text.length()) return true;
		return false;
	}
	std::string IsLogin(std::string login)
	{
		if (login.length() < 6) { return "������� �������� ����"; }
		if (login.length() > 13) { return "������� ������ ����"; }
		for (int i = 0; i < login.length(); i++)
		{
			if (login[i] == ' ') return "���� �� �� ������ ������";
		}
		return "+";
	}
	std::string IsPassword(std::string password)
	{
		if (password.length() < 6) { return "������� �������� ������"; }
		if (password.length() > 13) { return "������� ������ ������"; }
		for (int i = 0; i < password.length(); i++)
		{
			if (password[i] == ' ') return "���� �� �� ������ ������";
			if (password[i] == '�' || password[i] == '$' || password[i] == '@' ||
				password[i] == '*' || password[i] == '^' || password[i] == '&' ||
				password[i] == '%' || password[i] == '!' || password[i] == '?' 
				) return "���� �� �� ������ ����. �������";
		}
		return "+";
	}
	std::string IsEmail(std::string email)
	{
		if (email.length() < 4)return "���������� ����� �� ����";
		bool isMail = false;
		bool isPoint = false;
		for (int i = 0; i < email.length(); i++)
		{
			if (email[i] == '@')isMail = true;
			if (email[i] == '.')isPoint = true;
		}
		if (!isMail && !isPoint)return "���������� ����� �� ����";
		return "+";
	}
	std::string IsAge(std::string age)
	{
		if (age.length() < 1)return "������ �����";
		for (int i = 0; i < age.length(); i++)
		{
			if (age[i] < 48 || age[i]>57)return "������ �����";
		}
		return "+";
	}
};

