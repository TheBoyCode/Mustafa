#pragma once
#include"UserModel.h"
class DataSingleton
{
public:
	static DataSingleton& Instance()
	{
		static DataSingleton s;
		return s;
	}
	void SetUser(UserModel user)
	{
		this->user = user;
	}
	UserModel GetUser()
	{
		return this->user;
	}
private:
	UserModel user;
	DataSingleton() {}
	~DataSingleton() {} 

	DataSingleton(DataSingleton const&) = delete;
	DataSingleton& operator= (DataSingleton const&) = delete;
};

