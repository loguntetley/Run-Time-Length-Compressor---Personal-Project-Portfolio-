#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class FileReader
{
private:
	std::ifstream file;
	void fileOpener();
	
public:
	std::vector<char> vectorSetter();
	
};

