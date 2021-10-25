#include "PhoneBook.hpp"

void	clear_output(void)
{
	for (int i = 0; i < 50; i++)
		std::cout << std::endl;
}

void	welcome_output(void)
{
	clear_output();
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	std::cout << "\033[1;35mBienvenue dans votre annuaire intelligent !\033[0m" << std::endl;
	std::cout << "\033[1;34m                              -By @ugtheven\033[0m" << std::endl;
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	std::cout << "\033[1;35m- Tapez ADD pour ajouter un contact.\033[0m" << std::endl;
	std::cout << "\033[1;35m- Tapez SEARCH pour chercher un contact.\033[0m" << std::endl;
	std::cout << "\033[1;35m- Tapez EXIT pour quitter l'annuaire.\033[0m" << std::endl;
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
}

void	search_output(void)
{
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	std::cout << "\033[1;35m          - Liste de contact(s) -          \033[0m" << std::endl;
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	std::cout << "\033[1;35m     INDEX\033[1;34m|\033[1;35mFIRST NAME\033[1;34m|\033[1;35m LAST NAME\033[1;34m|\033[1;35m  NICKNAME\033[0m" << std::endl;
	std::cout << "\033[1;34m__________|__________|__________|__________\033[0m" << std::endl;
}

void	add_output(void)
{
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	std::cout << "\033[1;35m          - Creation de contact -          \033[0m" << std::endl;
	std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
}

void	add_contact(UserContact contact[8])
{
	std::string input;

	clear_output();
	add_output();
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].is_set == -1)
		{
			contact[i].is_set = 1;

			std::cout << "\033[1;35mPrenom : \033[0m";
			std::getline(std::cin, input);
			contact[i].fname = input;

			std::cout << "\033[1;35mNom de famille : \033[0m";
			std::getline(std::cin, input);
			contact[i].lname = input;

			std::cout << "\033[1;35mSurnom : \033[0m";
			std::getline(std::cin, input);
			contact[i].nickname = input;

			std::cout << "\033[1;35mNumero de telephone : \033[0m";
			std::getline(std::cin, input);
			contact[i].phone = input;

			std::cout << "\033[1;35mPire secret : \033[0m";
			std::getline(std::cin, input);
			contact[i].secret = input;
			clear_output();
			welcome_output();
			return;
		}
	}
	clear_output();
	welcome_output();
	std::cout << "\033[1;31mRepertoire complet !\033[0m" << std::endl;
}

std::string	to_10char(std::string str)
{
	std::string  buff;
	int i;

	if (str.length() == 10)
		return (str);
	buff = "          ";
	if (str.length() < 10)
	{
		for (i = 0; i < 10 - str.length(); i++)
			buff[i] = ' ';
		while (i < 10)
		{
			int j = 0;
			buff[i] = str[j];
			i++;
			j++;
		}
		return (buff);
	}
	else
	{
		for (i = 0; i < 9; i++)
			buff[i] = str[i];
		buff[i] = '.';
		return (buff);
	}
}

void	find_contact(UserContact contact[8])
{
	std::string input;

	std::cout << "\033[1;35mTapez le numéro du contact desiré : \033[0m";
	std::getline(std::cin, input);
	int index = std::atoi(input.c_str());
	if (index < 1 || index > 8)
	{
		clear_output();
		welcome_output();
		std::cout << "\033[1;31mIndex invalide !\033[0m" << std::endl;
	}
	else if (contact[index - 1].is_set != -1)
	{
		clear_output();
		welcome_output();
		std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
		std::cout << "\033[1;35m       - Fiche du contact numero \033[0m" << index << " -       " << std::endl;
		std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
		std::cout << "\033[1;35mPRENOM        \033[1;34m|\033[0m " << contact[index - 1].fname << std::endl;
		std::cout << "\033[1;35mNOM           \033[1;34m|\033[0m " << contact[index - 1].lname << std::endl;
		std::cout << "\033[1;35mSURNOM        \033[1;34m|\033[0m " << contact[index - 1].nickname << std::endl;
		std::cout << "\033[1;35mTELEPHONE     \033[1;34m|\033[0m " << contact[index - 1].phone << std::endl;
		std::cout << "\033[1;35mSECRET SOMBRE \033[1;34m|\033[0m " << contact[index - 1].secret << std::endl;
		std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
	}
	else
	{
		clear_output();
		welcome_output();
		std::cout << "\033[1;31mContact vierge !\033[0m" << std::endl;
	}
}

void	search_contact(UserContact contact[8])
{
	clear_output();
	search_output();
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].is_set != -1)
		{
			std::cout << std::setw(10) << std::to_string(i + 1) << "|";
			std::string str = contact[i].get_fname();
			if (str.length() <= 10)
				std::cout << std::setw(10) << str << "|";
			else
				std::cout << std::setw(9) << str.substr(0, 9) << ".|";
			str = contact[i].get_lname();
			if (str.length() <= 10)
				std::cout << std::setw(10) << str << "|";
			else
				std::cout << std::setw(9) << str.substr(0, 9) << ".|";
			str = contact[i].get_nickname();
			if (str.length() <= 10)
				std::cout << std::setw(10) << str << std::endl;
			else
				std::cout << std::setw(9) << str.substr(0, 9) << "." << std::endl;
			std::cout << "\033[1;34m___________________________________________\033[0m" << std::endl;
		}
	}
	find_contact(contact);
}

int	main()
{
	std::string buff;
	PhoneBook Phone_Book;

	welcome_output();
	while (1)
	{
		std::cout << "\033[1;34mPhoneBook> \033[0m";
		std::getline(std::cin, buff);
		if (buff == "EXIT")
			return 0;
		else if (buff == "ADD")
			add_contact(Phone_Book.contact);
		else if (buff == "SEARCH")
			search_contact(Phone_Book.contact);
	}
	return 0;
}