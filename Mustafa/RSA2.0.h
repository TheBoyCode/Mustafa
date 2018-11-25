#pragma once
#include"Key.h"
#include <map>
#include<list>
#include<string>

class RSA2_0
{
private:
	int id = 0;
	int C;
	std::vector<int> decode;
	std::map<char, int > Table;
	std::map<int, char > BackTable;
	std::string ReturnCode;
	std::string ReturnText;
	std::vector<int> safe;
	int T;
	Key k;
public:
	RSA2_0();
	std::string Encrypt(std::string);
	std::string Decrypt(std::string);
};
