#include "FileReader.h"

FileReader fileReader;
char pause;

int main()
{
	fileReader.fileOpener();
	char * textFile = fileReader.arraySetter(fileReader.sizeGetter());
	fileReader.fileCloser();
	std::cout << textFile << std::endl;
	std::cin >> pause;
}