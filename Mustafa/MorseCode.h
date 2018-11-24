#pragma once
#include "SubstitutionCode.h"

class MorseCode : public SubstitutionCode
{
private:
	Simbol simbols[32];
	std::string _whatSymbol(char text);
	char _whatLetter(std::string symbol);
public:
	MorseCode();

	std::string  Encrypt(std::string text);
	std::string  Decrypt(std::string text);
};


