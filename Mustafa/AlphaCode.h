#pragma once
#include"Key.h"
#include <map>
#include<list>
#include<string>

class AlphaCode
{
private:
	std::map<char, int > Text;
	std::map<int, char > BackText;
	int id = 0;
	std::string ReturnCode;
	std::string ReturnText;
	std::vector<int>decode;
public:
	AlphaCode();
	std::string Encrypt(std::string);
	std::string Decrypt(std::string);
};