#pragma once
#include <cmath> 
#include <vector>
#include <string>


class Key {
protected:
	int p = 7, q = 13;
	int I;
	int f;


public:
	int  n;
	int e;
	int d;
	int Result;
	Key();
	int OpenKey();
	int CloseKey(int);
	int Res();
};

