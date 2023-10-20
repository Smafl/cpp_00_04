
#include <iostream>
#include <stdexcept>
#include "phonebook.hpp"

int main()
{
	std::string cmd;

	PhoneBook pb;

	// std::cout << "Type a command: ADD, SEARCH or EXIT" << std::endl;
	// std::getline(std::cin, cmd);

	try {
		pb.get(12);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

/*
try {
	pb.get(12);
	// throw PhoneBook();
	// throw 22.2;
} catch (const std::exception &e) {
	std::cerr << e.what() << std::endl;
} catch (const PhoneBook &pb) {
	std::cerr << "phonebook" << std::endl;
} catch (int x) {
	std::cerr << "int" << x << std::endl;
}
*/
