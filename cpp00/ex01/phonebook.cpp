
#include "phonebook.hpp"
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

void PhoneBook::print_all() const {
	
}

const Contact &PhoneBook::get(unsigned int index) const {
	if (index >= _count)
		throw std::out_of_range("Phonebook index out of range");
	return _contact[(_first + index) % 8];
}
