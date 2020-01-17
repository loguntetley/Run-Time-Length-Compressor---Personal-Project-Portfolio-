#include "FileReader.h"

std::string FileReader::fileNameSetter()
{ 
	// Ask the user for the file name which they want to open and open it
	std::string fileName;
	std::cout << "Enter file name: ";
	std::cin >> fileName;
	return fileName;
}

void FileReader::noFile()
{ // Incase the wrong file name is used
	if (!inFile.is_open())
	{
		exit(EXIT_FAILURE);
	}
}

std::string FileReader::stringSetter(std::string fileName)
{
	std::string textFileString;
	char fileTempPos;
	
	inFile.open(fileName);
	noFile();
	while (inFile.peek() != EOF) // Runs until end of File(EOF)
	{
		// Push each char in the text file into textFileString
		inFile >> std::noskipws >> fileTempPos;
		textFileString.push_back(fileTempPos);
	}
	inFile.close();

	return textFileString;
}
