#pragma once
#include "UserModel.h"
#include <fstream>
#include <iostream>
class DataService
{
public:
	DataService();
	bool writeToFile(UserModel user);
	bool IsHere(std::string Login, std::string Pas);
};

