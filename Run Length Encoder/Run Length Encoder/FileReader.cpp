#include "FileReader.h"

void FileReader::fileOpener() 
{ 
	// Ask the user for the file name which they want to open and open it
	std::string fileName;
	std::cout << "Enter file name: ";
	std::cin >> fileName;
	file.open(fileName);
}

std::vector<char> FileReader::vectorSetter()
{
	std::vector<char> textFileVector;
	char fileTempPos;
	
	fileOpener();
	while (file.peek() != EOF) // Runs until end of File(EOF)
	{
		// Push each char in the text file into textFileVector
		file >> fileTempPos;
		textFileVector.push_back(fileTempPos);
	}
	file.close();

	return textFileVector;
}
