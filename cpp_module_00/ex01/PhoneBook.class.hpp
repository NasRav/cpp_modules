#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.class.hpp"
# include "PhoneBook.class.hpp"

# define MAX_CONTACTS 8

class	PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void	add_contact();
	void	print_contacts();

private:
	Contact _ph_book[MAX_CONTACTS];
	int		_count;

	void	_replace_contacts();
};

#endif
