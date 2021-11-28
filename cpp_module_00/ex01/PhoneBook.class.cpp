#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook( void )
{
	this->_count = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}

void    PhoneBook::add_contact( void )
{
	if (_count < MAX_CONTACTS)
	{
		this->_ph_book[_count].set_contact();
		++_count;
	}
	else
		this->_replace_contacts();
}

void	PhoneBook::_replace_contacts( void )
{
	int	i;

	i = 0;
	while (i < MAX_CONTACTS - 1)
	{
		this->_ph_book[i] = this->_ph_book[i + 1];
		++i;
	}
	this->_ph_book[MAX_CONTACTS - 1].set_contact();
}

void	PhoneBook::print_contacts( void )
{
	int	i;

	std::cout << std::right << std::setw(MAX_STR_LEN) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(MAX_STR_LEN) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(MAX_STR_LEN) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(MAX_STR_LEN) << "nickname";
	std::cout << std::endl;
	i = 0;
	while (i < this->_count)
	{
		std::cout << std::right << std::setw(MAX_STR_LEN) << i + 1;
		std::cout << "|";
		this->_ph_book[i].get_contact();
		++i;
	}
}
