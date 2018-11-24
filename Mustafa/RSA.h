#pragma once
#include"Key.h"
#include <map>
#include<list>
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
	bool check = false;
	std::vector<int> Dcode;
public:
	RSA();
	std::string encrypt(std::string);
	std::string decrypt(std::string);
};