#pragma once
#include <iostream>
#include <string>


class CompressionRatio
{
private:
	
public:
	float compressionRatioResult(std::string uncompressedString, std::string compressedString);
	void compressionRatioPrinter(float compressionRatioResult);

};

// compress_decompress_1.txt
// Uncompressed:      bbbbsssddd bds wwwweeee lk kkjsdhfnnnn hhhhiiiiiqwe wieiekkkkri kk3p sjddjdddiop ioooiieeerruuuuuu
// Compressed:        non-saveable compressed askiis
// Re-Umcompressed:   bbbbsssddd bds wwwweeee lk kkjsdhfnnnn hhhhiiiiiqwe wieiekkkkri kk3p sjddjdddiop ioooiieeerruuuuuu
// Compression Ratio: 1.390625

// compress_decompress_2.txt
// Uncompressed:      4444444423455623456.4555555878888888888886555556764566533333295292834j
// Compressed:        non-saveable compressed askiis
// Re-Umcompressed:   4444444423455623456.4555555878888888888886555556764566533333295292834j
// Compression Ratio: 1.555556

