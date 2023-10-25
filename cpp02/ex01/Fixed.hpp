
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
	int _nbr;
	static const int _frac_bits = 8;
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

#endif // FIXED_HPP
