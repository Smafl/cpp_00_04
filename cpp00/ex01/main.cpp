
#include <iostream>
#include <stdexcept>
#include "phonebook.hpp"

const Contact get_info() {
	Contact contact;

	std::cout << "Enter first name: " << std::endl;
	std::getline(std::cin, contact.first_name);
	std::cout << "Enter last name: " << std::endl;
	std::getline(std::cin, contact.last_name);
	std::cout << "Enter nickname: " << std::endl;
	std::getline(std::cin, contact.nickname);
	std::cout << "Enter phone number: " << std::endl;
	std::getline(std::cin, contact.phone_number);
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, contact.secret);
	return contact;
}

int main()
{
	std::string cmd;
	PhoneBook pb;

	while (true) {
		std::cout << "Type a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD" || cmd == "add") {
			pb.add(get_info());
		}
		else if (cmd == "SEARCH" || cmd == "search") {
			// try {
			// 	pb.get(12);
			// } catch (const std::exception &e) {
			// 	std::cerr << e.what() << std::endl;
			// }
			pb.print_all();
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
