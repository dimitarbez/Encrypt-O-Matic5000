#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "encryptor.h"

class decryptor
{
public:
	void PrintString();
	void ReadFromFile();
	void SetFileName();
	void SetDecryptedString(std::string);
	void SetDecryptKey(int);
	std::string GetFileName() const;
	decryptor();
	~decryptor();
private:
	std::string fileName;
	int key;
	std::string decryptedString;
	encryptor enc;
};

