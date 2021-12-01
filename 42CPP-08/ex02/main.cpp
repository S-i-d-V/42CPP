#include "includes/MutantStack.hpp"
#include "sources/MutantStack.cpp"

int	main(){
	MutantStack<int> mstack;

	std::cout << "\033[34;1mPushing 5 then 17 on the stack :\033[0m" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "\033[33mThe top of the stack is :\033[0m " << mstack.top() << std::endl;
	std::cout << "\033[33mThe size is :\033[0m " << mstack.size() << std::endl;

	std::cout << std::endl << "\033[34;1mPopping 1 number :\033[0m" << std::endl;
	mstack.pop();
	std::cout << "\033[33mThe top of the stack is :\033[0m " << mstack.top() << std::endl;
	std::cout << "\033[33mThe size is :\033[0m " << mstack.size() << std::endl;

	std::cout << std::endl << "\033[34;1mPushing 9 numbers (from 0 to 8) on the stack :\033[0m" << std::endl;
	for (int i = 0; i < 9; i++)
		mstack.push(i);
	std::cout << "\033[33mThe top of the stack is :\033[0m " << mstack.top() << std::endl;
	std::cout << "\033[33mThe size is :\033[0m " << mstack.size() << std::endl;

	std::cout << std::endl << "\033[34;1mIterating in my stack :\033[0m" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << std::endl << "\033[34;1mCopying the stack :\033[0m" << std::endl;
	std::cout << "\033[33mTop of the copy : \033[0m" << s.top() << std::endl;
	std::cout << "\033[33mSize of the copy : \033[0m" << s.size() << std::endl;


	return (0);
}