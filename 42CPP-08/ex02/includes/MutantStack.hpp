#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <iomanip>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack();
		MutantStack(MutantStack const& src);
		virtual ~MutantStack();

		MutantStack& operator=(MutantStack const& rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);
};

#endif