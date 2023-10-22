
#include "phonebook.hpp"
#include <iostream>

void Contact::set_first_name(const std::string& first_name) {
    _first_name = first_name;
}

void Contact::set_last_name(const std::string& last_name) {
    _last_name = last_name;
}

void Contact::set_nickname(const std::string& nickname) {
    _nickname = nickname;
}

void Contact::set_phone(const std::string& phone) {
    _phone = phone;
}

void Contact::set_secret(const std::string& secret) {
    _secret = secret;
}

const std::string& Contact::get_first_name() const {
    return _first_name;
}

const std::string& Contact::get_last_name() const {
    return _last_name;
}

const std::string& Contact::get_nickname() const {
    return _nickname;
}

const std::string& Contact::get_phone() const {
    return _phone;
}

const std::string& Contact::get_secret() const {
    return _secret;
}

void Contact::print() const {
	std::cout << get_first_name() << std::endl;
	std::cout << get_last_name() << std::endl;
	std::cout << get_nickname() << std::endl;
	std::cout << get_phone() << std::endl;
	std::cout << get_secret() << std::endl;
}

Contact Contact::input() {
	Contact contact;
	std::string input;

	std::cout << "Enter first name: " << std::endl;
	std::getline(std::cin, input);
	contact.set_first_name(input);
	std::cout << "Enter last name: " << std::endl;
	std::getline(std::cin, input);
	contact.set_last_name(input);
	std::cout << "Enter nickname: " << std::endl;
	std::getline(std::cin, input);
	contact.set_nickname(input);
	std::cout << "Enter phone number: " << std::endl;
	std::getline(std::cin, input);
	contact.set_phone(input);
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, input);
	contact.set_secret(input);
	return contact;
}
