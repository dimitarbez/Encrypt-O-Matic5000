#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "encryptor.h"

class decryptor
{
public:
	void PrintString();
	std::string ReadFromFile();
	void SetFileName();
	void SetDecryptedString(std::string);
	std::string GetFileName() const;
	decryptor();
	~decryptor();
private:
	std::string fileName;
	int key;
	std::string decryptedString;
	encryptor enc;
};

