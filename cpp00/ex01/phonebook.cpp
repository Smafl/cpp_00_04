
#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>

PhoneBook::PhoneBook() :
	_count(0),
	_first(0) {
}

PhoneBook::~PhoneBook() {
	
}

void PhoneBook::add(const Contact &contact) {
	if (_count < 8) {
		_contact[_count] = contact;
		_count++;
	}
	else {
		_contact[_first] = contact;
		_first = (_first + 1) % 8;
	}
}

void print_headline() {
	std::cout << std::setfill(' ') << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << std::endl;
}

std::string truncate(std::string str) {
	if (str.length() < 10)
		return str;
	std::string new_str;
	new_str = str;
	new_str.resize(9);
	new_str.append(".");
	return new_str;
}

// const here belong to this
int PhoneBook::print_all() const {
	if (_count == 0) {
		std::cout << "Phonebook is empty. Use ADD command to add a contact" << std::endl;
		return EXIT_FAILURE;
	}
	print_headline();
	for (unsigned int i = 0; i != _count; i++) {
		std::cout << std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(_contact[(_first + i) % 8].get_first_name());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(_contact[(_first + i) % 8].get_last_name());
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(_contact[(_first + i) % 8].get_nickname()) << std::endl;
	}
	return EXIT_SUCCESS;
}

const Contact &PhoneBook::get(unsigned int index) const {
	if (index >= _count)
		throw std::out_of_range("Phonebook index out of range");
	return _contact[(_first + index) % 8];
}
