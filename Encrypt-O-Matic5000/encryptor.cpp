#include "pch.h"
#include "encryptor.h"


void encryptor::Encrypt(std::string& inputString)
{
	for (auto& c : inputString)
	{
		c += GetKey();
	}
	WriteToFile(inputString);
}

void encryptor::WriteToFile(std::string& outString)
{
	std::ofstream outStream(GetFileName() + ".dimo");
	outStream << outString;
}


void encryptor::Introduction()
{
	std::cout<< "Welcome to Dimo's encryption program!\n";
	std::cout << "What message would you like to encrypt?\n";
	std::cout << "--------------------------------------";
}

void encryptor::GetUserInput()
{
	std::cout << "Enter your message:" << std::endl;
}

void encryptor::SetInput(std::string inputStr)
{
	input = inputStr;
	Encrypt(input);
}

std::string encryptor::GetInput() const
{
	return input;
}

void encryptor::SetKey(int inputKey)
{
	key = inputKey;
}

int encryptor::GetKey() const
{
	return key;
}

std::string encryptor::GetFileName() const
{
	return fileName;
}

encryptor::encryptor()
{
}


encryptor::~encryptor()
{
}
