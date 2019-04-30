// Encrypt-O-Matic5000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "encryptor.h"

encryptor enc;
std::string inputStr;
int key;

enum MenuSelect
{
	encrypt,
	decrypt,
	error
};

MenuSelect MenuSelector(std::string input);

int main()
{	
	MenuSelect sel;
	do
	{
		std::cout << "Encrypt or Decrypt?" << std::endl;

		std::cin >> inputStr;
		sel = MenuSelector(inputStr);
		switch (sel)
		{
		case MenuSelect::encrypt:
			enc.Introduction();
			std::cout << "Enter the key: ";
			std::cin >> key;
			enc.SetKey(key);
			std::cout << "Enter the string: ";
			std::cin >> inputStr;
			enc.SetInput(inputStr);
			
			break;
		default:
			break;
		}
	} while (sel != MenuSelect::error);

}

MenuSelect MenuSelector(std::string input)
{
	if (input == "1")
	{
		return MenuSelect::encrypt;
	}
	else
	{
		return MenuSelect::error;
	}	
}

