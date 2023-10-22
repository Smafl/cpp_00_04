
#include "phonebook.hpp"
#include <iostream>

static std::string get_input() {
	std::string input;
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cerr << "Field cannot be empty. Enter info:" << std::endl;
		std::getline(std::cin, input);
	}
	return input;
}

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

const std::string &Contact::get_first_name() const {
    return _first_name;
}

const std::string &Contact::get_last_name() const {
    return _last_name;
}

const std::string &Contact::get_nickname() const {
    return _nickname;
}

const std::string &Contact::get_phone() const {
    return _phone;
}

const std::string &Contact::get_secret() const {
    return _secret;
}

void Contact::print() const {
	std::cout << get_first_name() << std::endl;
	std::cout << get_last_name() << std::endl;
	std::cout << get_nickname() << std::endl;
	std::cout << get_phone() << std::endl;
	std::cout << get_secret() << std::endl;
}

Contact Contact::set_input() {
	Contact contact;

	std::cout << "Enter first name: " << std::endl;
	contact.set_first_name(get_input());
	std::cout << "Enter last name: " << std::endl;
	contact.set_last_name(get_input());
	std::cout << "Enter nickname: " << std::endl;
	contact.set_nickname(get_input());
	std::cout << "Enter phone number: " << std::endl;
	contact.set_phone(get_input());
	std::cout << "Enter darkest secret: " << std::endl;
	contact.set_secret(get_input());
	return contact;
}
