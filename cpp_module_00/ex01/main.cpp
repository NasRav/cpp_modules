#include "PhoneBook.class.hpp"

int	main( void )
{
	std::string	cmd;
	PhoneBook	ph_book;

	do
	{
		std::cout << "My PhoneBook > ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			ph_book.add_contact();
		else if (cmd == "SEARCH")
			ph_book.print_contacts();
	}	while (cmd != "EXIT");
	
	return (0);
}
