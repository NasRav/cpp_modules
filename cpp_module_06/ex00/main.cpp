#include "Convert.hpp"

int	main( int argc, char **argv )
{
	Convert	convert;
	double	arg;

	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (0);
	}
	arg = std::atof(argv[1]);
	try
	{
		convert = Convert(arg);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	convert.output();
	return (0);
}
