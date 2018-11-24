#include "NumberCode.h"

	
	NumberCode::NumberCode()
	{
		for (int i = 32, k = 0,n=100; i <= 126; i++, k++,n++)
		{
			simbols[k].letter = i;
			simbols[k].symbol = std::to_string(n);
		}
	}
	std::string NumberCode::Encrypt(std::string text)
	{
		std::string buff = "";
		for (int i = 0; i < text.length(); i++)
		{
			buff += _whatSymbol(text[i]);
		}
		return buff;
	}
	std::string NumberCode::Decrypt(std::string text)
	{
		std::string buff = "";
		std::string result = "";
		int count = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if(count!=3)buff += text[i];
			count++;
			if (count == 3)
			{
				count = 0;
				result += _whatLetter(buff);
				buff = "";
			}
		}
		return result;
	}

	std::string NumberCode::_whatSymbol(char text)
	{
		for (int k = 0; k < 95; k++)
		{
			if (text.Equals(simbols[k].letter))
			{
				return simbols[k].symbol;
			}
		}
	}
	char NumberCode::_whatLetter(std::string symbol)
	{
		for (int i = 0; i < 95; i++)
		{
			if (simbols[i].symbol == symbol)return simbols[i].letter;
		}
		return ' ';
	}

