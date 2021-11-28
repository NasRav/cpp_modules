#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		ofsName;
	std::string		buf;
	size_t			index;

	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return (0);
	}
	ifs = std::ifstream(argv[1]);
	if (!ifs)
	{
		std::cerr << "Error: Cannot open " << argv[1] << std::endl;
		return (0);
	}
	ofsName = (std::string)argv[1] + ".replace";
	ofs = std::ofstream(ofsName);
	if (!ofs)
	{
		std::cerr << "Error: Cannot create or write in " << ofsName << std::endl;
		return (0);
	}

	do
	{
		std::getline(ifs, buf);
		while (true)
		{
			index = buf.find(argv[2]);
			
			if (index == std::string::npos)
			{
				ofs << buf;
				break ;
			}
			ofs << buf.substr(0, index) << argv[3];
			buf = buf.substr(index + std::strlen(argv[2]));
		}
		if (ifs.eof())
			break ;
		ofs << std::endl;
	}	while (true);

	ifs.close();
	ofs.close();
	return (0);
}
