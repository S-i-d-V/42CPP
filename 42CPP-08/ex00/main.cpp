#include "includes/EasyFind.hpp"

int main(){
	std::list<int> mylst;
	
	mylst.push_back(1);
	mylst.push_back(42);
	mylst.push_back(-2);
	mylst.push_back(4);
	mylst.push_back(5);

	try{
		std::cout << "\033[34;1mNumbers present (found) in the list :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 1) << std::endl;
		std::cout << easyFind(mylst, 42) << std::endl;
		std::cout << easyFind(mylst, -2) << std::endl;
		std::cout << easyFind(mylst, 4) << std::endl;
		std::cout << easyFind(mylst, 5) << std::endl;

		std::cout << std::endl << "\033[34;1mNumbers not in the list :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 0) << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
	}

}