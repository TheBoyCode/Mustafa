#pragma once
#include"Key.h"
#include <map>
#include<list>
#include<string>
#include "CodeWithKey.h"
class AlphaCode:public CodeWithKey
{
private:
	std::map<char, int > Text;
	std::map<int, char > BackText;
	std::string ReturnCode;
	std::string ReturnText;
	std::vector<int>decode;
public:
	AlphaCode();
	std::string Encrypt(std::string);
	std::string Decrypt(std::string);
};