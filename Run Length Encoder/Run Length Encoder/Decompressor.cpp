#include "Decompressor.h"

std::vector<char> Decompressor::vectorDecompressor(std::vector<char> compressedVector) 
{
	//compressedVector.push_back(NULL);
	std::vector<char> uncompressedVector;
	int amount = 0;
	char nextVectorValue;

	for (size_t i = 0; i < compressedVector.size(); i++)
	{
		amount = (int)compressedVector[i] - 48;
		nextVectorValue = compressedVector[i + 1];

		for (size_t j = 0; j < amount; j++)
		{
			uncompressedVector.push_back(nextVectorValue);
			std::cout << nextVectorValue;
		}
		i++;
	}

	return uncompressedVector;

	/*uncompressedVector.push_back(NULL); // Push null to aloowed end value in vecotr to be accessed
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

	return compressedVector;*/
	
}
