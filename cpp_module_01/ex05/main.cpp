#include "Karen.hpp"

int	main( void )
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");

	karen.complain("DEBuG");
	karen.complain("infO");
	karen.complain("WArniNG");
	karen.complain("error");

	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("INFO");
	karen.complain("DEBUG");

	return (0);
}
