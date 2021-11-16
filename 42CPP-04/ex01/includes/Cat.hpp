#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const& src);
		~Cat();

		Cat& operator=(Cat const& rhs);

		void	setIdea(std::string idea);
		std::string getIdea(int n) const;

		void	makeSound() const;

	private:
		Brain	*_brain;
};

#endif