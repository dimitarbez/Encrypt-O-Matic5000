#include "pch.h"
#include "decryptor.h"


void decryptor::PrintString()
{
	std::cout << decryptedString << std::endl;
}

std::string decryptor::ReadFromFile()
{
	std::ifstream f(GetFileName());
	std::string temp;
	while (f >> temp)
	{
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
