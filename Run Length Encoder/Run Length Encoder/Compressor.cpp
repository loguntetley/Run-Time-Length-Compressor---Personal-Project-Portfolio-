#include "Compressor.h"

std::string Compressor::vectorCompressor(std::string uncompressedVector)
{
	uncompressedVector.push_back(NULL); // Push null to allow end value in vecotr to be accessed
	char previousVectorValue = uncompressedVector[0]; 
	int count = 0;
	std::string compressedVector;

	for (size_t i = 0; i < uncompressedVector.size(); i++)
	{
		if (uncompressedVector[i] == previousVectorValue)
		{
			count++; // Increments for each same char
			previousVectorValue = uncompressedVector[i]; // To store the previous char value
		}
		if (uncompressedVector[i] != previousVectorValue)
		{
			if (count != 1)
			{
				std::string countString = std::to_string(count); // For char conversion of any sized int
				for (size_t i = 0; i < countString.size(); i++)
				{
					compressedVector.push_back(countString[i]);
				}
			}
			compressedVector.push_back(previousVectorValue + 128);
			count = 1; // Resets Counter for new value
			previousVectorValue = uncompressedVector[i];
		}
	}

	return compressedVector;
}