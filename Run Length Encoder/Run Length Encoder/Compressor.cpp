#include "Compressor.h"

std::string Compressor::stringCompressor(std::string uncompressedString)
{
	uncompressedString.push_back(NULL); // Push null to allow end value in string to be accessed
	char previousStringValue = uncompressedString[0]; 
	int count = 0;
	std::string compressedString;

	for (size_t i = 0; i < uncompressedString.size(); i++)
	{
		if (uncompressedString[i] == previousStringValue)
		{
			count++; // Increments for each same char
			previousStringValue = uncompressedString[i]; // To store the previous char value
		}
		if (uncompressedString[i] != previousStringValue)
		{
			if (count != 1)
			{
				std::string countString = std::to_string(count); // For char conversion of any sized int
				for (size_t i = 0; i < countString.size(); i++)
				{
					compressedString.push_back(countString[i]);
				}
			}
			compressedString.push_back(previousStringValue + 128);
			count = 1; // Resets Counter for new value
			previousStringValue = uncompressedString[i];
		}
	}

	return compressedString;
}