#include "FileReader.h"

void FileReader::fileOpener() { file.open("compress_decompress_1.txt", std::ios::in | std::ios::binary | std::ios::ate); }

int FileReader::sizeGetter() { return file.tellg(); }

void FileReader::fileCloser() { file.close(); }

char* FileReader::arraySetter(int arraySize)
{
	char* textFile = new char[98];
	for (size_t i = 0; i < arraySize; i++)
	{
		file.get(textFile[i]);
	}

	return textFile;
}