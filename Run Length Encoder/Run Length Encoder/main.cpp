#include "UserInterface.h"
#include "FileReader.h"
#include "FileWriter.h"
#include "CompressionRatio.h"
#include "Compressor.h"
#include "Decompressor.h"

UserInterface uI;
FileReader fR;
FileWriter fW;
CompressionRatio cR;
Compressor c;
Decompressor dC;

int main()
{
	char pause;
	std::string uncompressedVector, compressedVector;
	std::string optionChoice = uI.optionChoice();
	std::string fileName = fR.fileNameSetter();

	if (optionChoice[0] == '1')
	{
		uncompressedVector = fR.vectorSetter(fileName);
		compressedVector = c.vectorCompressor(uncompressedVector);
		fW.wrieToFile(fileName, compressedVector);
	}
	if (optionChoice[0] == '2')
	{
		compressedVector = fR.vectorSetter(fileName);
		uncompressedVector = dC.vectorDecompressor(compressedVector);
		fW.wrieToFile(fileName, uncompressedVector);
	}

	cR.compressionRatioPrinter(cR.compressionRatioResult(uncompressedVector, compressedVector));
	std::cin >> pause;
}