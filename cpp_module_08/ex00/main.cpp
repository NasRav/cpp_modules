#include "easyfind.hpp"

int	main( void )
{
	std::list<int>		lst;
	std::vector<int>	vec;
	std::deque<int>		deq;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	try
	{
		std::cout << *easyfind(lst, 4) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}
	try
	{
		std::cout << *easyfind(lst, 1) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}

	std::cout << std::endl;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	try
	{
		std::cout << *easyfind(vec, 4) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}
	try
	{
		std::cout << *easyfind(vec, 2) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}

	std::cout << std::endl;

	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(3);
	try
	{
		std::cout << *easyfind(deq, 4) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}
	try
	{
		std::cout << *easyfind(deq, 3) << std::endl;
	}
	catch (std::string e)
	{
		std::cout << e << std::endl;
	}

	return (0);
}
