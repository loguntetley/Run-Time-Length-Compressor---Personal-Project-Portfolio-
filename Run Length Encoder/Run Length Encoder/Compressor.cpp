#include "Compressor.h"


std::vector<char> Compressor::vectorCompressor(std::vector<char> uncompressedVector)
{
	uncompressedVector.push_back(NULL); // Push null to allow end value in vecotr to be accessed
	char previousVectorValue = uncompressedVector[0]; 
	int count = 0;
	std::vector<char> compressedVector;

	for (size_t i = 0; i < uncompressedVector.size(); i++)
	{
		if (uncompressedVector[i] == previousVectorValue)
		{
			count++; // Increments for each same char
			previousVectorValue = uncompressedVector[i]; // To store the previous char value
		}
		if (uncompressedVector[i] != previousVectorValue)
		{
			std::string countString = std::to_string(count); // For char conversion of any sized int
			std::vector<char> CounterCharValue(countString.begin(), countString.end());
			for (size_t i = 0; i < CounterCharValue.size(); i++)
			{
				compressedVector.push_back(CounterCharValue[i]);
			}
			compressedVector.push_back(previousVectorValue);
			count = 1; // Resets Counter for new value
			previousVectorValue = uncompressedVector[i];
		}
	}

	return compressedVector;
}