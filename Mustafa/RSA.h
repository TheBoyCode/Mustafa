#pragma once
#include"Key.h"
#include <map>
#include<list>
#include<string>
class RSA : public Key
{
private:
	int id = 0;
	long int C;
	std::vector<int> code;
	std::vector<int>decode;
	std::map<char, int > Table;
	std::map<int, char > BackTable;
	std::string ReturnCode;
	std::list<std::string> NewText;
	std::string Text;
	std::vector<int> safe;
	int T;
	Key K;
	std::vector<int> Dcode;
public:
	RSA();
	std::string Encrypt(std::string);
	std::string Decrypt(std::string);
};