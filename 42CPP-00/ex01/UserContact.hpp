#ifndef USERCONTACT_H
# define USERCONTACT_H

#include <iostream>
#include <iomanip>
#include <cstring>

class UserContact {
	public:
		UserContact(void);
		~UserContact(void);

		std::string	get_fname() const;
		std::string	get_lname() const;
		std::string	get_nickname() const;
		std::string	get_phone() const;
		std::string	get_secret() const;

		int is_set;
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string phone;
		std::string secret;
};

#endif