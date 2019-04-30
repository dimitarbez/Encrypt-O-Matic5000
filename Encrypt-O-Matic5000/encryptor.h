#pragma once

#include <iostream>
#include <string>
#include <fstream>

class encryptor
{
public:
	void Encrypt(std::string&);
	void WriteToFile(std::string&);

	void Introduction();
	void GetUserInput();
	void SetInput(std::string);
	std::string GetInput() const;
	void SetKey(int);
	int GetKey() const;
	std::string GetFileName() const;
	encryptor();
	~encryptor();
private:
	int key = 0;
	std::string fileName = "encryptorOutput";
	std::string input;
};

