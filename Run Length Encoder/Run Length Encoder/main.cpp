#include "FileReader.h"
#include "CompressionRatio.h"
#include "Compressor.h"
#include "Decompressor.h"

FileReader fR;
CompressionRatio cR;
Compressor c;
Decompressor dC;
char pause;

int main()
{
	std::vector<char> tempVectorI = fR.vectorSetter();
	for (size_t i = 0; i < tempVectorI.size(); i++)
	{
		std::cout << tempVectorI[i];
	}

	std::cout << std::endl;

	std::vector<char> tempVectorJ = c.vectorCompressor(tempVectorI);
	for (size_t i = 0; i < tempVectorJ.size(); i++)
	{
		std::cout << tempVectorJ[i];
	}

	std::cout << std::endl;

	cR.compressionRatioPrinter(cR.compressionRatioResult(tempVectorI, tempVectorJ));

	std::cout << std::endl;

	std::vector<char> tempVectorK = dC.vectorDecompressor(tempVectorJ);
	for (size_t i = 0; i < tempVectorK.size(); i++)
	{
		std::cout << tempVectorK[i];
	}

	std::cin >> pause;

	/*std::cout << std::endl;

	std::vector<char> tempVectorTwo = c.vectorCompressor(tempVector);
	for (size_t i = 0; i < tempVectorTwo.size(); i++)
	{
		std::cout << tempVectorTwo[i];
	}
	std::cin >> pause;*/

}