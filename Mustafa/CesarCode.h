#pragma once
#include "MorseCode.h"
class CesarCode : public  SubstitutionCode 
{
public:
	Simbol simbols[26];
	int Hook;
	CesarCode(int hook);
	std::string Encrypt(std::string text);
	std::string Decrypt(std::string text);
};