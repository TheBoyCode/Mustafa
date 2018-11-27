#include "MorseCode.h"


std::string  MorseCode::_whatSymbol(char text)
{
	for (int i = 0; i < 32; i++)
	{
		if (simbols[i].letter.Equals(text))return simbols[i].symbol;
	}
	return "";
}
char MorseCode::_whatLetter(std::string symbol)
{
	for (int i = 0; i < 32; i++)
	{
		if (simbols[i].symbol == symbol)return simbols[i].letter;
	}
	return ' ';
}
MorseCode::MorseCode()
{
	simbols[0].letter = 'q';
	simbols[0].symbol = "--.-";
	simbols[1].letter = 'w';
	simbols[1].symbol = ".--";
	simbols[2].letter = 'e';
	simbols[2].symbol = ".";
	simbols[3].letter = 'r';
	simbols[3].symbol = ".-.";
	simbols[4].letter = 't';
	simbols[4].symbol = "-";
	simbols[5].letter = 'y';
	simbols[5].symbol = "-.--";
	simbols[6].letter = 'u';
	simbols[6].symbol = "..-";
	simbols[7].letter = 'i';
	simbols[7].symbol = "..";
	simbols[8].letter = 'o';
	simbols[8].symbol = "---";
	simbols[9].letter = 'p';
	simbols[9].symbol = ".--.";
	simbols[10].letter = 'a';
	simbols[10].symbol = ".-";

	simbols[11].letter = 's';
	simbols[11].symbol = "...";
	simbols[12].letter = 'd';
	simbols[12].symbol = "...";
	simbols[13].letter = 'f';
	simbols[13].symbol = "..-.";
	simbols[14].letter = 'g';
	simbols[14].symbol = "--.";
	simbols[15].letter = 'h';
	simbols[15].symbol = "....";
	simbols[16].letter = 'j';
	simbols[16].symbol = ".---";
	simbols[17].letter = 'k';
	simbols[17].symbol = "-.-";
	simbols[18].letter = 'l';
	simbols[18].symbol = ".-..";
	simbols[19].letter = 'z';
	simbols[19].symbol = "--..";
	simbols[20].letter = 'x';
	simbols[20].symbol = "-..-";

	simbols[21].letter = 'c';
	simbols[21].symbol = "-.-.";
	simbols[22].letter = 'v';
	simbols[22].symbol = "...-";
	simbols[23].letter = 'b';
	simbols[23].symbol = "-...";
	simbols[24].letter = 'n';
	simbols[24].symbol = "-.";
	simbols[25].letter = 'm';
	simbols[25].symbol = "--";
	simbols[26].letter = ',';
	simbols[26].symbol = "--..--";
	simbols[27].letter = '!';
	simbols[27].symbol = "-.-.--";
	simbols[28].letter = '(';
	simbols[28].symbol = "-.--.";
	simbols[29].letter = ')';
	simbols[29].symbol = "-.--.-";
	simbols[30].letter = '?';
	simbols[30].symbol = "..--..";
	simbols[31].letter = ' ';
	simbols[31].symbol = " ";
}

std::string   MorseCode::Encrypt(std::string text)
{
	std::transform(text.begin(), text.end(), text.begin(), ::tolower);
	std::string encrypt = "";
	int countToLetter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ')countToLetter++;
		if (text[i] != ' ') break;
	}
	for (int i = countToLetter; i < text.length(); i++)
	{
		encrypt += _whatSymbol(text[i]) + " ";
	}
	return encrypt;
}
std::string  MorseCode::Decrypt(std::string text)
{
	std::string decrypt = "";
	std::string buff = "";
	int countToLetter = 0;
	bool isWord = true;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ')countToLetter++;
		if (text[i] != ' ') break;
	}
	for (int i = countToLetter; i < text.length(); i++)
	{
		if (text[i] != ' ') isWord = true;
		if (text[i] == ' ')isWord = false;
		if (isWord)
		{
			buff += text[i];
		}
		if (!isWord)
		{
			decrypt += _whatLetter(buff);
			buff = "";
		}
	}
	return decrypt;
}
