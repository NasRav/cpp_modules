#include "iter.hpp"

int		main( void )
{
	int			i_arr[10];
	float		f_arr[10];
	double		d_arr[10];
	char		c_arr[10];
	std::string	str_arr[10];

	for(int i = 0; i < 10; i++)
	{
		i_arr[i] = i;
		f_arr[i] = i;
		d_arr[i] = i;
		c_arr[i] = '0' + i;
		str_arr[i] = "string";
	}
	iter(i_arr, 10, f);
	std::cout << std::endl;
	iter(f_arr, 10, f);
	std::cout << std::endl;
	iter(d_arr, 10, f);
	std::cout << std::endl;
	iter(c_arr, 10, f);
	std::cout << std::endl;
	iter(str_arr, 10, f);

	return (0);
}
