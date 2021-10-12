#include "UserContact.hpp"

void	add_contact()
{
	std::cout << "Fonction ADD" << std::endl;
}

void	search_contact()
{
	std::cout << "Fonction SEARCH" << std::endl;
}

int	main()
{
	std::string buff;
	UserContact Contact[8];

	std::cout << "Bienvenue dans votre PhoneBook !" << std::endl;
	while (1)
	{
		std::cin >> buff;
		if (buff == "EXIT")
			return 0;
		else if (buff == "ADD")
			add_contact();
		else if (buff == "SEARCH")
			search_contact();
	}
	return 0;
}