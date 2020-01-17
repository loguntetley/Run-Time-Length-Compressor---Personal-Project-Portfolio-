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
	std::string uncompressedString, compressedString;
	std::string optionChoice = uI.optionChoice();
	std::string fileName = fR.fileNameSetter();

	if (optionChoice[0] == '1')
	{
		uncompressedString = fR.stringSetter(fileName);
		compressedString = c.stringCompressor(uncompressedString);
		fW.wrieToFile(fileName, compressedString);
	}
	if (optionChoice[0] == '2')
	{
		compressedString = fR.stringSetter(fileName);
		uncompressedString = dC.stringDecompressor(compressedString);
		fW.wrieToFile(fileName, uncompressedString);
	}

	cR.compressionRatioPrinter(cR.compressionRatioResult(uncompressedString, compressedString));
	std::cin >> pause;
}