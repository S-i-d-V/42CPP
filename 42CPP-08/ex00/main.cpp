#include "includes/EasyFind.hpp"

int main(){
	//List
	std::cout << "\033[34;1mToFind is in the list :\033[0m" << std::endl;
	try{
		std::list<int> mylst;
	
		mylst.push_back(1);
		mylst.push_back(42);
		mylst.push_back(-2);
		mylst.push_back(4);
		mylst.push_back(-678);
		std::cout << "\033[33mNumbers present (found) in the list :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 1) << std::endl;
		std::cout << easyFind(mylst, 42) << std::endl;
		std::cout << easyFind(mylst, -2) << std::endl;
		std::cout << easyFind(mylst, 4) << std::endl;
		std::cout << easyFind(mylst, -678) << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
	}

	//List
	std::cout << std::endl << "\033[34;1mToFind is in the vector :\033[0m" << std::endl;
	try{
		std::vector<int> mylst;
	
		mylst.push_back(1);
		mylst.push_back(42);
		mylst.push_back(-2);
		mylst.push_back(4);
		mylst.push_back(-678);
		std::cout << "\033[33mNumbers present (found) in the vector :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 1) << std::endl;
		std::cout << easyFind(mylst, 42) << std::endl;
		std::cout << easyFind(mylst, -2) << std::endl;
		std::cout << easyFind(mylst, 4) << std::endl;
		std::cout << easyFind(mylst, -678) << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
	}

	//Fail
	std::cout << std::endl << "\033[34;1mCatch exception :\033[0m" << std::endl;
	try{
		std::list<int> mylst;

		mylst.push_back(1);
		mylst.push_back(42);
		mylst.push_back(-2);
		std::cout << "\033[33mNumbers present (found) in the list :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 1) << std::endl;
		std::cout << easyFind(mylst, 42) << std::endl;
		std::cout << easyFind(mylst, -2) << std::endl;
		std::cout << "\033[33mTrying to find 0 in the list :\033[0m" << std::endl;
		std::cout << easyFind(mylst, 0) << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
	}

}