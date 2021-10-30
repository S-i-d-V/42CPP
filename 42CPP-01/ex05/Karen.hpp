#ifndef KAREN_H
#define KAREN_H

#include <iomanip>
#include <iostream>

class	Karen{
	public:
		Karen(void);
		~Karen(void);

		void	complain(std::string level);
		void	(Karen::*func[5])(void);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif