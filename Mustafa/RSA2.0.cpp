#include "RSA2.0.h"

RSA2_0::RSA2_0()
{
	char trans;
	for (int i = 65; i <= 90; i++) {
		id++;
		trans = (char)i;
		Table.emplace(trans, id);
		BackTable.emplace(id, trans);
	}
	for (int i = 97; i <= 122; i++) {
		id++;
		trans = (char)i;
		Table.emplace(trans, id);
		BackTable.emplace(id, trans);
	}
	id++;
	Table.emplace(' ', id);
	BackTable.emplace(id, ' ');
}

std::string RSA2_0::Encrypt(std::string text)
{
	k.OpenKey();
	k.CloseKey(k.gete());
	char tmp;
	int Inttmp;
	int Result;

	for (int i = 0; i < text.length(); i++) {
		tmp = text[i];
		T = Table[tmp];
		C = T + k.gete();
		ReturnCode += std::to_string(C);
		ReturnCode += '.';
	}
	ReturnCode += std::to_string(k.gete());

	
	return ReturnCode;
}
std::string RSA2_0::Decrypt(std::string code)
{
	std::string tmp;

	auto ptr = code.c_str();
	char *endptr = nullptr;


	for (int i = 0; i < code.length() - 2; i++) {
		auto value = strtol(ptr, &endptr, 10);
		if (ptr == endptr) {
			ptr++;
		}
		else {
			ptr = endptr;
			decode.push_back(value);
		}
	}
	int Size = decode.size();
	k.CloseKey(decode[Size - 1]);
	for (int i = 0; i < decode.size(); i++) {

		C = decode[i];
		T = C - k.gete();

		tmp = BackTable[T];
		ReturnText += tmp;

	}
	return ReturnText;
}