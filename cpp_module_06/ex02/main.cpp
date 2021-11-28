#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main( void )
{
	Base	*ptr = generate();
	Base	&ref = *ptr;

	std::cout << "identify(Base* p): ";
	identify(ptr);

	std::cout << "identify(Base& p): ";
	identify(ref);

	delete ptr;

	return (0);
}
