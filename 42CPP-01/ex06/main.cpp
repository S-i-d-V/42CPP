#include "Karen.hpp"

int	main(int ac, char **av){
	Karen Karen;

	if (ac == 2){
		std::string level = av[1];
		Karen.complain(level);
	}
	return (0);
}