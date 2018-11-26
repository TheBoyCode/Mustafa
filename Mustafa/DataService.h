#pragma once
#include "UserModel.h"
#include <fstream>
#include <iostream>
class DataService
{
public:
	DataService();
	bool writeToFile(UserModel user)
	{
		std::ofstream fout;
		std::string path = "users.txt";
		fout.open(path, std::ofstream::app);
		if (fout.is_open())
		{
			fout.write((char*)&user, sizeof(UserModel));
			return true;
		}
		fout.close();
		return false;
	}
	bool IsHere(std::string Login, std::string Pas)
	{
		std::ifstream fin;
		std::string path = "users.txt";
		fin.open(path);
		UserModel user;
		for (int i = Login.length(); i < 20; i++)
		{
			Login += '?';
		}
		for (int i = Pas.length(); i < 10; i++)
		{
			Pas += '?';
		}
		if (fin.is_open())
		{
			while (fin.read((char*)&user, sizeof(UserModel)))
			{
				bool normal = true;
				for (int i = 0; i < 20; i++)
				{
					if (user.Login[i] != Login[i])normal = false;
				}
				for (int i = 0; i < 10; i++)
				{
					if (user.Password[i] != Pas[i])normal = false;
				}
				if (normal)return true;
			}
			fin.close();
		}
		return false;
	}
};

