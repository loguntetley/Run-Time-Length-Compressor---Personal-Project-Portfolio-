#include "Decompressor.h"

std::string Decompressor::stringDecompressor(std::string compressedString)
{
	std::string uncompressedString, stringAmount;

	for (size_t i = 0; i < compressedString.size(); i++)
	{
		if ((int)compressedString[i] - 48 > 0 && (int)compressedString[i] - 48 < 10)// Checks if the value is between 1-9
		{
			stringAmount.push_back(compressedString[i]); // Pushes char values into a string "12345"
		}
		else
		{
			int amount = std::atoi(stringAmount.c_str());// Converts string to int
			if (amount == 0) { amount = 1; } // Incase only one value is needed, prevents the value being skipped
			for (size_t j = 0; j < amount; j++)
			{
				uncompressedString.push_back(compressedString[i] - 128); // Makes the value back into its original value
			}
			stringAmount.erase(stringAmount.begin(), stringAmount.end()); // Erases the string
		}
	}

	return uncompressedString;
}
