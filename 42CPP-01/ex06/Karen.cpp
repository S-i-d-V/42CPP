#include "Karen.hpp"

Karen::Karen(void){
	return;
}

Karen::~Karen(void){
	return;
}

void Karen::complain(std::string level){
	std::string tab_level[4] {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	for (i; i < 4; i++){
		if (tab_level[i] == level)
			break;
	}
	switch (i){
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
	}
}

void Karen::debug(void){
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void){
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
