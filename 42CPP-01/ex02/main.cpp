#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "\033[34;1mString original (string):\033[0m" << std::endl;
	std::cout << "Valeur = " << string << std::endl;
	std::cout << "Addresse = " << &string << std::endl;
	std::cout << std::endl;

	std::cout << "\033[34;1mPointeur (stringPTR):\033[0m" << std::endl;
	std::cout << "Valeur = " << *stringPTR << std::endl;
	std::cout << "Addresse = " << stringPTR << std::endl;
	std::cout << std::endl;

	std::cout << "\033[34;1mReference (stringREF):\033[0m" << std::endl;
	std::cout << "Valeur = " << stringREF << std::endl;
	std::cout << "Addresse = " << &stringREF << std::endl;
	return (0);
}
