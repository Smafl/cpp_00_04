
#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>

class Fixed {
private:
	int _data;
	static const int _frac_bits = 8;
public:
	Fixed();
	Fixed(const int int_nbr);
	Fixed(const float float_nbr);
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);

//	getter/setter
	int getRawBits() const;
	void setRawBits(int const raw);

//	convertion
	float toFloat() const;
	int toInt() const;

//	comparison operators
	bool operator>(const Fixed &a) const;
	bool operator<(const Fixed &a) const;
	bool operator>=(const Fixed &a) const;
	bool operator<=(const Fixed &a) const;
	bool operator==(const Fixed &a) const;
	bool operator!=(const Fixed &a) const;

//	arithmetic operators
	Fixed operator+(const Fixed &a) const;
	Fixed operator-(const Fixed &a) const;
	Fixed operator*(const Fixed &a) const;
	Fixed operator/(const Fixed &a) const;

//	increment/decrement
//	(pre-increment and post-increment,
//	pre-decrement and post-decrement) operators
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

//	min/max
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif // FIXED_HPP
