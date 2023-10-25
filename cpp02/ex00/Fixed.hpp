
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
	int _data;
	static const int _frac_bits;
public:
	Fixed();
	~Fixed();	
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif // FIXED_HPP
