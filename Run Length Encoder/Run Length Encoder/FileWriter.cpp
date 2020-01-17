#include "FileWriter.h"

void FileWriter::wrieToFile(std::string fileName, std::string textFileString)
{
	std::ofstream outFile;
	outFile.open(fileName); // Opens the file you selected
	for (size_t i = 0; i < textFileString.size(); i++) // Runs for length of string
	{
		outFile << textFileString[i]; // Places your string of chars into the place
	}
	outFile.close(); // Closes the file
}
