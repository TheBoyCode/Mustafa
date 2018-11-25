#pragma once
#include <iostream>
#include <cmath> 
#include <vector>


class Key {
protected:
	int p = 7, q = 13;
	int I;
	int f;
	int  n;
	int e;
	int d;
	int Result;

public:
	Key();
	int OpenKey();
	int CloseKey(int);
	int Res();
	int getn();
	int  gete();
	int getd();
	int getResult();

};