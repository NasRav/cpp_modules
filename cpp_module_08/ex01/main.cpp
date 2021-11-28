#include "span.hpp"

int	main( void )
{
	Span	sp = Span(5);

	try
	{
		sp.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	sp.addNumber(5);

	try
	{
		sp.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	try
	{
		sp.addNumber(0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Span	lst(10);
	Span	large(0, 100000);

	for (int i = 0; i < 10; i++)
		lst.addNumber(i * 2);

	std::cout << "Shortest span: " << lst.shortestSpan()<< std::endl;
	std::cout << "Longest span: " << lst.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "Shortest span: " << large.shortestSpan() << std::endl;
	std::cout << "Longest span: " << large.longestSpan() << std::endl;

	return (0);
}
