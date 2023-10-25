
#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>

class Fixed {
private:
	int _data;
	static const int _frac_bits;
public:
	Fixed();
	Fixed(const int int_nbr);
	Fixed(const float float_nbr);
	~Fixed();	
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif // FIXED_HPP
