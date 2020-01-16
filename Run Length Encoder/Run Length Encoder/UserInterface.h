#pragma once
#include <string>
#include <iostream>

class UserInterface
{
private:
	std::string incorrectInput(std::string selectedOption);

public:
	std::string optionChoice();
	
};

