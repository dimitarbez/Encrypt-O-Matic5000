#include "pch.h"
#include "encryptor.h"


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
}

encryptor::encryptor()
{
}


encryptor::~encryptor()
{
}
