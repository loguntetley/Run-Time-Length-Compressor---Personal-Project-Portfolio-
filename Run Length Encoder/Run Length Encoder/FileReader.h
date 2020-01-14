#pragma once
#include <iostream>
#include <string>
#include <fstream>

class FileReader
{
private:
	std::ifstream file;
	
public:
	void fileOpener();
	int sizeGetter();
	void fileCloser();
	char* arraySetter(int arraySize);


};

