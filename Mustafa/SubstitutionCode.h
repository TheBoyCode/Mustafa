//#include <string>

#ifndef SUBST
#define SUBST
#include "ICript.h"
class SubstitutionCode : public ICript
{
public:
	struct Simbol
	{
		char letter;
		std::string symbol;
	};
};
#endif