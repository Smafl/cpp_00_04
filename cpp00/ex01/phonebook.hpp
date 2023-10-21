
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

// public by default
struct Contact {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	void print() const;
	// static funct doesn't need an object to be called
	static Contact input();
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
	int print_all() const; // if user cmd search
	const Contact &get(unsigned int index) const;
};

#endif
