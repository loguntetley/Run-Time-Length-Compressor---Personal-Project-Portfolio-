#include "UserInterface.h"

std::string UserInterface::incorrectInput(std::string selectedOption)
{
	if (selectedOption[0] == '1' || selectedOption[0] == '2')
	{
		return selectedOption;
	}
	std::cout << "Invalid option " << std::endl;
	return optionChoice(); // Loops until valid result

}

std::string UserInterface::optionChoice()
{
	// Allows for the user to select an option they desire
	std::string selectedOption; 
	std::cout << "Enter 1 to Compress and 2 to Decompress: " << std::endl;
	std::cin >> selectedOption;
	return incorrectInput(selectedOption);
}

