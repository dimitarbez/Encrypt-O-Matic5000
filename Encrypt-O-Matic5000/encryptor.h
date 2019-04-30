#pragma once

#include <iostream>
#include <string>
#include <fstream>

class encryptor
{
public:
	void Introduction();
	void GetUserInput();
	void SetInput(std::string);
	encryptor();
	~encryptor();
private:
	int key = 0;
	std::string fileName = "encryptorOutput";
	std::string input;
};

