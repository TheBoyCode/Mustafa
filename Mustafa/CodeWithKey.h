#pragma once
#include "Key.h"
#include"ICript.h"
class CodeWithKey:public ICript
{
public:
	Key k;
	int id;
	CodeWithKey();
};

