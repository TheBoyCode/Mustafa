#pragma once
#include <string>
ref class ValidateService
{
public:
	ValidateService();
	bool isMorseCode(std::string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != '.' || text[i] != '-') return false;
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

};

