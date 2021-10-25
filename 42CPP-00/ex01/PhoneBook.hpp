#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "UserContact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		UserContact contact[8];
};

#endif