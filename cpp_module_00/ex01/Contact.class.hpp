#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.class.hpp"

# define MAX_STR_LEN 10

class Contact
{
public:
	Contact( void );
	~Contact( void );
	
	void		set_contact( void );
	void		get_contact( void );
	
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	void		_set_first_name( void );
	void		_set_last_name( void );
	void		_set_nickname( void );
	void		_set_phone_nunber( void );
	void		_set_darkest_secret( void );

	std::string	_get_first_name( void );
	std::string	_get_last_name( void );
	std::string	_get_nickname( void );
	std::string	_get_phone_nunber( void );
	std::string	_get_darkest_secret( void );

	std::string	_cut_string(std::string str);
};

#endif
