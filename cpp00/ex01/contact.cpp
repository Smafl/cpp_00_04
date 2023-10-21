
#include "phonebook.hpp"
#include <iostream>

void Contact::print() const {
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << secret << std::endl;
}

Contact Contact::input() {
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
