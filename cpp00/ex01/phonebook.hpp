
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

// public by default
class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone;
	std::string _secret;
public:
	// no need to declare constructor/destructor if it's empty
	void set_first_name(const std::string &str);
	void set_last_name(const std::string &str);
	void set_nickname(const std::string &str);
	void set_phone(const std::string &str);
	void set_secret(const std::string &str);
    const std::string &get_first_name() const;
    const std::string &get_last_name() const;
    const std::string &get_nickname() const;
    const std::string &get_phone() const;
    const std::string &get_secret() const;
	void print() const;
	// static funct doesn't need an object to be called
	static Contact set_input();
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
