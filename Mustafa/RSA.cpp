#include "RSA.h"

int Pow(int a, int b) {
	long long answer = a;
	for (int i = 1; i <= b; i++)
		answer = a * a;
	return answer;
}
RSA::RSA()
{
	char trans;
	for (int i = 65; i <= 90; i++) {
		id++;
		trans = (char)i;
		Table.emplace(trans, id);
	}
	for (int i = 97; i <= 122; i++) {
		id++;
		trans = (char)i;
		Table.emplace(trans, id);
	}
	id++;
	Table.emplace(' ', id);
	id = 0;
	for (int i = 65; i <= 90; i++) {
		id++;
		trans = (char)i;
		BackTable.emplace(id, trans);
	}
	for (int i = 97; i <= 122; i++) {
		id++;
		trans = (char)i;
		BackTable.emplace(id, trans);
	}
	id++;
	BackTable.emplace(id, ' ');
}
std::string RSA::encrypt(std::string text) {
	Key k;


	char tmp;
	k.OpenKey();
	safe.push_back(k.e);
	for (int i = 0; i < text.length(); i++) {
		tmp = text[i];

		T = Table[tmp];

		C = (Pow(T, k.e)) % k.n;

		ReturnCode += std::to_string(C);
		code.push_back(C);
		decode.push_back(T);

	}
	check = true;
	return ReturnCode;
}
std::string RSA::decrypt(std::string text) {
	Key k;
	int s;
	std::string tmp;
	int R;
	auto it = safe.begin();
	s = *it;
	k.CloseKey(s);
	k.Res();
	if (check == true) {
		for (int i = 0; i < text.length(); i++) {

			C = decode[i];
			T = (Pow(C, k.Result)) % k.n;
			decode.push_back(T);

		}
		for (int i = 0; i < text.length(); i++) {
			T = decode[i];
			tmp = BackTable[T];
			Text += tmp;
			NewText.push_back(tmp);
		}

		return Text;
	}
	else {
		for (int i = 0; i < text.length(); i++) {
			Dcode.push_back(text[i]);
			C = Dcode[i];
			T = (Pow(C, k.Result)) % k.n;
			tmp = BackTable[T];
			Text += tmp;
			NewText.push_back(tmp);

		}
		return Text;

	}
}