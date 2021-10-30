#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

std::string	get_filename(std::string path){
	return ( path += ".replace");
}

int	check_args(char **av){
	if (std::strlen(av[2]) == 0)
	{
		std::cout << "Error empty string 1." << std::endl;
		return (1);
	}
	if (std::strlen(av[3]) == 0)
	{
		std::cout << "Error empty string 2." << std::endl;
		return (1);
	}
	std::ifstream ifs(av[1]);
	if (ifs.fail())
	{
		ifs.close();
		std::cout << "Error file can't be open." << std::endl;
		return (1);
	}
	return (0);
}

std::string replace_line(std::string line, char *s1, char *s2){
	std::string to_replace = s1; std::string replace_to = s2;

	for (int i = line.find(to_replace); i < line.length(); i++){
		if (line.compare(i, to_replace.length(), to_replace) == 0){
			line.erase(i, to_replace.length());
			line.insert(i, replace_to);
			i += replace_to.length();
		}
	}
	return (line);
}

int	main(int ac, char **av){
	if (ac == 4)
	{
		if (check_args(av) == 1)
			return (0);
		std::ifstream ifs(av[1]);
		std::ofstream ofs(get_filename(av[1]));
		std::string line;
		std::getline(ifs, line);
		while (ifs.eof() == false)
		{
			if (line.find(av[2]) < line.length())
				ofs << replace_line(line, av[2], av[3]);
			else
				ofs << line;
			std::getline(ifs, line);
			if (ifs.eof() == false)
				ofs << std::endl;
			else
				ofs << std::endl << line << std::endl;
		}
	}
	else
		std::cout << "Error arguments." << std::endl << "./replace <filename> <to_replace> <replace_to>" << std::endl;
	return (0);
}