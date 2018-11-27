#include <string>
#ifndef CRIPT
#define CRIPT



class ICript
{
public:
	virtual std::string  Encrypt(std::string text) = 0;
	virtual std::string  Decrypt(std::string text) = 0;
};
#endif // DEBUG