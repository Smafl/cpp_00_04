
#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
	std::cout << "DEBUG" << std::endl;
}

void Harl::info() {
	std::cout << "INFO" << std::endl;
}

void Harl::warning() {
	std::cout << "WARNING" << std::endl;
}

void Harl::error() {
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*func[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complain_levels[] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (level == complain_levels[i])
		{
			(this->*func[i])();
			return ;
		}
	}
}
