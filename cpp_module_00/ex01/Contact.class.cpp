#include "Contact.class.hpp"

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

void		Contact::_set_first_name( void )
{
	std::cout << "First name: ";
	std::getline(std::cin, this->_first_name);
}

void		Contact::_set_last_name( void )
{
	std::cout << "Last name: ";
	std::getline(std::cin, this->_last_name);
}

void		Contact::_set_nickname( void )
{
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
}

void		Contact::_set_phone_nunber( void )
{
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_number);
}

void		Contact::_set_darkest_secret( void )
{
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}

void		Contact::set_contact( void )
{
	_set_first_name();
	_set_last_name();
	_set_nickname();
	_set_phone_nunber();
	_set_darkest_secret();
}

std::string	Contact::_get_first_name( void )
{
	return (this->_first_name);
}

std::string	Contact::_get_last_name( void )
{
	return (this->_last_name);
}

std::string	Contact::_get_nickname( void )
{
	return (this->_nickname);
}

std::string	Contact::_get_phone_nunber( void )
{
	return (this->_phone_number);
}

std::string	Contact::_get_darkest_secret( void )
{
	return (this->_darkest_secret);
}

void		Contact::get_contact( void )
{
	std::cout << std::right << std::setw(MAX_STR_LEN) << _cut_string(_get_first_name());
	std::cout << "|";
	std::cout << std::right << std::setw(MAX_STR_LEN) << _cut_string(_get_last_name());
	std::cout << "|";
	std::cout << std::right << std::setw(MAX_STR_LEN) << _cut_string(_get_nickname());
	std::cout << std::endl;
}

std::string	Contact::_cut_string(std::string str)
{
	if (str.length() > MAX_STR_LEN)
	{
		str[MAX_STR_LEN - 1] = '.';
		return (str.substr(0, MAX_STR_LEN));
	}
	return (str);
}
