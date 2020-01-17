#pragma once
#include <iostream>
#include <fstream>
#include <string>

class FileReader
{
private:
	std::ifstream inFile;
	void noFile();

public:
	std::string fileNameSetter();
	std::string stringSetter(std::string fileName);
	
};

