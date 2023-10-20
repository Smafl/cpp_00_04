
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
	std::cout << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << std::endl;
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

// start from _first!
// const here belong to this
void PhoneBook::print_all() const {
	print_headline();
	for (unsigned int i = 0; i != this->_count; i++) {
		std::cout << std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(this->_contact[i].first_name);
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(this->_contact[i].last_name);
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << truncate(this->_contact[i].nickname) << std::endl;
	}
}

const Contact &PhoneBook::get(unsigned int index) const {
	if (index >= _count)
		throw std::out_of_range("Phonebook index out of range");
	return _contact[(_first + index) % 8];
}
