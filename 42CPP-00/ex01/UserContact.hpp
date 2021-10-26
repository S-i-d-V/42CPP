#ifndef USERCONTACT_H
# define USERCONTACT_H

# include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <cstring>

class UserContact {
	public:
		UserContact(void);
		~UserContact(void);

		void	set_fname(std::string input);
		void	set_lname(std::string input);
		void	set_nickname(std::string input);
		void	set_phone(std::string input);
		void	set_secret(std::string input);
		void	set_set(bool set);
		std::string	get_fname() const;
		std::string	get_lname() const;
		std::string	get_nickname() const;
		std::string	get_phone() const;
		std::string	get_secret() const;
		bool		get_set() const;

	private:
		bool is_set;
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string phone;
		std::string secret;
};

#endif