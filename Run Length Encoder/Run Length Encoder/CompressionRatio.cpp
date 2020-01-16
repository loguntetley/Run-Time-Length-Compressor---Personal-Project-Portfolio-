#include "CompressionRatio.h"

float CompressionRatio::compressionRatioResult(std::string uncompressedVector, std::string compressedVector)
{
	float uncompressedSize = uncompressedVector.size(), compressedSize = compressedVector.size();
	// Formula: Compression Ratio = Uncompressed Size / Compressed Size
	return uncompressedSize / compressedSize;// Gets the compression ratio
}

void CompressionRatio::compressionRatioPrinter(float compressionRatioResult)
{
	std::cout << "Compression Ratio: " + std::to_string(compressionRatioResult) << std::endl; // Printed in a seprate function incase the result is needed else where
}