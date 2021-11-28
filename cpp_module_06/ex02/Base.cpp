#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) {}

Base	*generate( void )
{
	int		id;

	std::srand(std::time(NULL));
	id = std::rand() % 3;
	if (id == 0)
		return (new A());
	if (id == 1)
		return (new B());
	if (id == 2)
		return (new C());
	else
		return (NULL);
}

void	identify( Base* p )
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(*p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(*p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(*p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}


void	identify( Base& p )
{
	Base	ptr;

	try
	{
		ptr = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}

	try
	{
		ptr = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}
