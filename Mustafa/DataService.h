#pragma once
#include "UserModel.h"
#include <fstream>
#include <iostream>
#include "DataSingleton.h"
class DataService
{
public:
	DataService();
	bool writeToFile(UserModel user);
	UserModel IsHere(std::string Login, std::string Pas);
	void WriteToSingleton(UserModel user);
};

