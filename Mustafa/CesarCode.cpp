#pragma once
#include "CesarCode.h"

	CesarCode::CesarCode(int hook)
	{
		this->Hook = hook;
		Hook = Hook % 26;
		for (int i = 0, k = 97; i < 26; i++)
		{
			simbols[i].letter = k;
		}
	}
	std::string CesarCode::Encrypt(std::string text)
	{
		std::string result = "";
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] + Hook > 122)
			{
				result += 96 + (text[i] + Hook) - 122;
			}
			else  result += text[i] + Hook;
		}
		return result;
	}
	std::string CesarCode::Decrypt(std::string text)
	{
		std::string result = "";
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] - Hook < 97)
			{
				result += 123 - (Hook - (text[i] - 97));
			}
			else  result += text[i] - Hook;
		}
		return result;
	}
