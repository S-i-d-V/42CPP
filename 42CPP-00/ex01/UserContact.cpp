#include "phonebook.hpp"

UserContact::UserContact(void) {
	this->is_set = -1;
	return;
}

UserContact::~UserContact(void) {
	return;
}

std::string	UserContact::get_fname() const {
	return (UserContact::fname);
}

std::string	UserContact::get_lname() const {
	return (UserContact::lname);
}

std::string	UserContact::get_nickname() const {
	return (UserContact::nickname);
}

std::string	UserContact::get_phone() const {
	return (UserContact::phone);
}

std::string	UserContact::get_secret() const {
	return (UserContact::secret);
}
