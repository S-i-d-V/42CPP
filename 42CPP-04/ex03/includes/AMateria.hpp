#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <iomanip>

#include "ICharacter.hpp"

class AMateria{
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& src);
		virtual ~AMateria();
		
		AMateria& operator=(AMateria const& rhs);

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) const = 0;

	protected:
		std::string _type;
};

#endif