#pragma once
#include"Key.h"
#include <map>
#include<list>
#include<string>
#include "CodeWithKey.h"
class RSA2_0: public CodeWithKey
{
private:
	int C;
	std::vector<int> decode;
	std::map<char, int > Table;
	std::map<int, char > BackTable;
	std::string ReturnCode;
	std::string ReturnText;
	std::vector<int> safe;
	int T;
public:
	RSA2_0();
	std::string Encrypt(std::string);
	std::string Decrypt(std::string);
};
