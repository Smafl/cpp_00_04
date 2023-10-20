
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

// public by default
struct Contact {
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;

	// Contact();
	// ~Contact();
	void print() const;
};

class PhoneBook {
private:
	Contact _contact[8];
	unsigned int _count;
	unsigned int _first;
public:
	PhoneBook();
	~PhoneBook();
	void add(const Contact &contact);

	// const here belong to this
	void print_all() const; // if user input search
	const Contact &get(unsigned int index) const;
};

#endif
