#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>
#include <string>

//Exceptions
class NonDisplayableException: public std::exception{
	char const* what() const throw();
};

char const* NonDisplayableException::what() const throw(){
	return ("Non Displayable");
}

class ImpossibleException: public std::exception{
	char const* what() const throw();
};

char const* ImpossibleException::what() const throw(){
	return ("Impossible");
}

class NotLiteralException: public std::exception{
	char const* what() const throw();
};

char const* NotLiteralException::what() const throw(){
	return ("Not a litteral expression !");
}

//Functions
double	convertLiteral(std::string input){
	double ret;

	if (input.length() == 0)
		throw NotLiteralException();
	if (input.length() == 1 || input == "nan" || input == "nanf" || input == "inf" || input == "inff" || input == "-inf" || input == "-inff")
		(void)ret;
	else{
		int i = 0;
		char const* cstr = input.c_str();

		if (cstr[i] == '-')
			i++;
		while (i < static_cast<int>(input.length()) && cstr[i] >= 48 && cstr[i] <= 57)
			i++;
		if (i < static_cast<int>(input.length()) && cstr[i] == '.'){
			i++;
			while (i < static_cast<int>(input.length())){
				if (cstr[i] < 48 || cstr[i] > 57)
					break;
				i++;
			}
			if (cstr[i] == 'f')
				i++;
		}
		if (i != static_cast<int>(input.length()))
			throw NotLiteralException();
	}
	if (input.length() == 0 || (input.length() == 1 && !isdigit(input.at(0))))
		ret = input.at(0);
	else
		ret = std::stod(input);
	return (ret);
}

char	getChar(double toConvert){
	if (toConvert < 32 && toConvert >= 0)
		throw NonDisplayableException();
	if (toConvert < 0 || toConvert > 127)
		throw ImpossibleException();
	if (std::isnan(toConvert) || std::isinf(toConvert))
		throw ImpossibleException();
	return (static_cast<char>(toConvert));
}

int		getInt(double toConvert){
	if (toConvert < -2147483648 || toConvert > 2147483647)
		throw ImpossibleException();
	if (std::isnan(toConvert) || std::isinf(toConvert))
		throw ImpossibleException();
	return (static_cast<char>(toConvert));
}

float	 getFloat(double toConvert){
	return (static_cast<float>(toConvert));
}

double	 getDouble(double toConvert){
	return (static_cast<double>(toConvert));
}

int	main(int ac, char **av){
	if (ac == 2){
		std::string input = av[1];
		double toConvert;
	
		try{
			std::cout << "\033[32;1mMy converter :\033[0m" << std::endl;
			toConvert = convertLiteral(input);
			//Char
			try{
				std::cout << std::setw(11) << "\033[34;1mtoChar   = \033[0m" << getChar(toConvert) << std::endl;
			}
			catch (std::exception& error){
				std::cout << "\033[31;1m" << error.what() << "\033[0m" << std::endl;
			}
			//Int
			try{
				std::cout << std::setw(11) << "\033[34;1mtoInt    = \033[0m" << getInt(toConvert) << std::endl;
			}
			catch (std::exception& error){
				std::cout << "\033[31;1m" << error.what() << "\033[0m" << std::endl;
			}
			//Float
			try{
				if (std::isnan(getFloat(toConvert)) || std::isinf(getFloat(toConvert)))
					std::cout << std::setw(11) << "\033[34;1mtoFloat  = \033[0m" << getFloat(toConvert) << "f" << std::endl;
				else if (getFloat(toConvert) - static_cast<int>(toConvert) > 0.0)
					std::cout << std::setw(11) << "\033[34;1mtoFloat  = \033[0m" << getFloat(toConvert) << "f" << std::endl;
				else
					std::cout << std::setw(11) << "\033[34;1mtoFloat  = \033[0m" << getFloat(toConvert) << ".0f" << std::endl;
			}
			catch (std::exception& error){
				std::cout << "\033[31;1m" << error.what() << "\033[0m" << std::endl;
			}
			//Double
			try{
				if (getDouble(toConvert) - static_cast<int>(toConvert) > 0.0 || std::isnan(getFloat(toConvert)) || std::isinf(getFloat(toConvert)))
					std::cout << std::setw(11) << "\033[34;1mtoDouble = \033[0m" << getDouble(toConvert) << std::endl;
				else
					std::cout << std::setw(11) << "\033[34;1mtoDouble = \033[0m" << getDouble(toConvert) << ".0" << std::endl;
			}
			catch (std::exception& error){
				std::cout << "\033[31;1m" << error.what() << "\033[0m" << std::endl;
			}
		}
		catch (std::exception& error){
			std::cout << "\033[31;1m" << error.what() << "\033[0m" << std::endl;
		}
	}
	else
		std::cout << "\033[31;1mWrong argument !\033[0m" << std::endl;
	
	return (0);
}