#pragma once
#include "MorseCode.h"
#include"ICript.h"
class NumberCode : public SubstitutionCode , public ICript
{
public:
	Simbol simbols[95];
	NumberCode();
	std::string Encrypt(std::string text);
	std::string Decrypt(std::string text);
private:
	std::string _whatSymbol(char text);
	char _whatLetter(std::string symbol);
};