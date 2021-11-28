#include <iostream>

int	main ( void )
{
	std::string		str;
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	str = "HI THIS IS BRAIN";
	std::cout << "Addresses in memory of the string: " << std::endl;
	std::cout << strPtr << std::endl;
	std::cout << &strRef << std::endl;
	std::cout << "Strings: " << std::endl;
	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
	return (0);
}
