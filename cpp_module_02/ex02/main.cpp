#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "a = " << a << "\tb = " << b << std::endl;

	std::cout << "a > b\t" << (a > b) << std::endl;
	std::cout << "a >= b\t" << (a >= b) << std::endl;
	std::cout << "a < b\t" << (a < b) << std::endl;
	std::cout << "a <= b\t" << (a <= b) << std::endl;
	std::cout << "a == b\t" << (a == b) << std::endl;
	std::cout << "a != b\t" << (a != b) << std::endl;

	std::cout << "a > a\t" << (a > a) << std::endl;
	std::cout << "a >= a\t" << (a >= a) << std::endl;
	std::cout << "a < a\t" << (a < a) << std::endl;
	std::cout << "a <= a\t" << (a <= a) << std::endl;
	std::cout << "a == a\t" << (a == a) << std::endl;
	std::cout << "a != a\t" << (a != a) << std::endl;

	return 0;
}