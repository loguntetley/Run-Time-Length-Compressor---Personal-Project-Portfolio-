#include "CompressionRatio.h"

float CompressionRatio::compressionRatioResult(std::vector<char> uncompressedVector, std::vector<char> compressedVector)
{
	// Formula: Compression Ratio = Uncompressed Size / Compressed Size
	return uncompressedVector.size() / compressedVector.size();// Gets the compression ratio
}

void CompressionRatio::compressionRatioPrinter(float compressionRatioResult)
{
	std::cout << compressionRatioResult << std::endl; // Printed in a seprate function incase the result is needed else where
}