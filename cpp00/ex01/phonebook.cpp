
#include <iostream>
#include "phonebook.hpp"

int main()
{
	std::string cmd;

	std::cout << "Type a command: ADD, SEARCH or EXIT" << std::endl;
	std::getline(std::cin, cmd);
	return 0;
}
