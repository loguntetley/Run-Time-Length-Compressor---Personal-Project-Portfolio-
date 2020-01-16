#include "FileWriter.h"

void FileWriter::wrieToFile(std::string fileName, std::string textFileVector)
{
	std::ofstream outFile;
	outFile.open(fileName); // Opens the file you selected
	for (size_t i = 0; i < textFileVector.size(); i++) // Runs for length of Vector
	{
		outFile << textFileVector[i]; // Places your vector of chars into the place
	}
	outFile.close(); // Closes the file
}
