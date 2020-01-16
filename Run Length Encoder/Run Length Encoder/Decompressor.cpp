#include "Decompressor.h"

std::string Decompressor::vectorDecompressor(std::string compressedVector)
{
	std::string uncompressedVector, stringAmount;

	for (size_t i = 0; i < compressedVector.size(); i++)
	{
		if ((int)compressedVector[i] - 48 > 0 && (int)compressedVector[i] - 48 < 10)// Checks if the value is between 1-9
		{
			stringAmount.push_back(compressedVector[i]); // Pushes char values into a string "12345"
		}
		else
		{
			int amount = std::atoi(stringAmount.c_str());// Converts string to int
			if (amount == 0) { amount = 1; } // Incase only one value is needed, prevents the value being skipped
			for (size_t j = 0; j < amount; j++)
			{
				uncompressedVector.push_back(compressedVector[i] - 128); // Makes the value back into its original value
			}
			stringAmount.erase(stringAmount.begin(), stringAmount.end()); // Erases the string
		}
	}

	return uncompressedVector;
}
