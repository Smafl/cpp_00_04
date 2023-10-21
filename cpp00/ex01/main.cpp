
#include "phonebook.hpp"
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main()
{
	std::string cmd;
	PhoneBook pb;

	while (true) {
		std::cout << "Type a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD" || cmd == "add") {
			pb.add(Contact::input());
		}
		else if (cmd == "SEARCH" || cmd == "search") {
			if (pb.print_all())
				continue;
			std::cout << "Enter index for more info:" << std::endl;
			std::string str_index;
			std::getline(std::cin, str_index);
			try {
				unsigned int index = std::stoi(str_index);
				const Contact &contact = pb.get(index - 1);
				contact.print();
			} catch (const std::exception &e) {
				std::cerr << "Index out of range" << std::endl;
			}
		}
		else if (cmd == "EXIT" || cmd == "exit")
			break;
		else {
			std::cout << "Invalid command. ";
			continue;
		}
	}
	return 0;
}
