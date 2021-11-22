#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

template<typename T>
class Array{
	public:
		Array(){
			_array = nullptr;
			_len = 0;
		}

		Array(unsigned int n){
			_array = new T[n];
			_len = n;
		}

		Array(Array const& src){
			*this = src;
			return;
		}

		~Array(){
			delete [] _array;
			return;
		}

		Array& operator=(Array const& rhs){
			if (_len > 0)
				delete [] _array;
			_array = nullptr;
			_len = 0;
			if (rhs._len > 0){
				_len = rhs._len;
				_array = new T[_len];
				for (int i = 0; i < _len; i++){
					_array[i] = rhs._array[i];
				}
			}
			return (*this);
		}

		class OutOfArray : public std::exception{
			char const* what() const throw(){
				return ("The index you want to reach is out of the tab.");
			}
		};

		T& operator[](unsigned int i){
			if (i >= _len)
				throw OutOfArray();
			return (_array[i]);
		}

		unsigned int size() const{
			return (_len);
		}

	private:
		T* _array;
		unsigned int _len;
};

#endif