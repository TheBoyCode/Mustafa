#include <string>
class ICript
{
public:
	virtual std::string  Encrypt(std::string text) = 0;
	virtual std::string  Decrypt(std::string text) = 0;
};