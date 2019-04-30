#include "pch.h"
#include "decryptor.h"


void decryptor::PrintString()
{
	std::cout << decryptedString << std::endl;
}

void decryptor::ReadFromFile()
{
	SetFileName();
	std::ifstream f(GetFileName());
	std::string temp;
	while (f >> temp)
	{
		for (auto& c : temp)
		{
			c -= key;
		}
		SetDecryptedString(temp);
	}
}

void decryptor::SetFileName()
{
	fileName = enc.GetFileName() + ".dimo";
}

void decryptor::SetDecryptedString(std::string decrypted)
{
	decryptedString = decrypted;
	PrintString();
}

void decryptor::SetDecryptKey(int newKey)
{
	key = newKey;
}

std::string decryptor::GetFileName() const
{
	return fileName;
}

decryptor::decryptor()
{
}


decryptor::~decryptor()
{
}
