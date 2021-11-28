#include "Data.hpp"
#include <iostream>

int main( void )
{
	Data	*old_ptr = new Data(42, 4242, 42.42);
	Data	*new_ptr;

	new_ptr = deserialize(serialize(old_ptr));

	std::cout << "before: " << old_ptr << std::endl;
	std::cout << "serialize: " << serialize(old_ptr) << std::endl;
	std::cout << "char: '" << old_ptr->getChar() << "'" << std::endl;
	std::cout << "int: " << old_ptr->getInt() << std::endl;
	std::cout << "double: " << old_ptr->getDouble() << std::endl;

	std::cout << std::endl;

	std::cout << "before: " << new_ptr << std::endl;
	std::cout << "serialize: " << serialize(new_ptr) << std::endl;
	std::cout << "char: '" << new_ptr->getChar() << "'" << std::endl;
	std::cout << "int: " << new_ptr->getInt() << std::endl;
	std::cout << "double: " << new_ptr->getDouble() << std::endl;

	delete old_ptr;

	return (0);
}
