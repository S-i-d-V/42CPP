#include "PhoneBook.hpp"

UserContact::UserContact(void) {
	this->is_set = false;
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

bool	UserContact::get_set() const {
	return (UserContact::is_set);
}

void	UserContact::set_fname(std::string input){
	this->fname = input;
}

void	UserContact::set_lname(std::string input){
	this->lname = input;
}

void	UserContact::set_nickname(std::string input){
	this->nickname = input;
}

void	UserContact::set_phone(std::string input){
	this->phone = input;
}

void	UserContact::set_secret(std::string input){
	this->secret = input;
}

void	UserContact::set_set(bool set){
	this->is_set = set;
}
