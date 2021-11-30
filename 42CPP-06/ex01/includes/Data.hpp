#ifndef DATA_HPP
#define DATA_HPP

#include <iomanip>
#include <iostream>
#include <stdint.h>

class Data{
	public:
		Data();
		Data(Data const& src);
		~Data();

		Data& operator=(Data const& rhs);

		int			_firstData;
		float		_secondData;
		std::string	_differentData;
};

#endif