#pragma once
//#include "MorseCode.h"
#include "SubstitutionCode.h"
class NumberCode : public SubstitutionCode 
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