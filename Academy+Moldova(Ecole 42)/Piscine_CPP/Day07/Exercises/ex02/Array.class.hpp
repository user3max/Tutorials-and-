//Array.class.hpp by Carp-Bezverhnii Maxim
#include <iostream>

template< typename T>
class Array {
private:
	T* 				_arr; 
	unsigned int	_size;
public:
	Array<T>(void) : _arr(NULL), _size(0) {
		std::cout << "Default constructor are called" << std::endl;
	}

	Array<T>(unsigned int n) : _size(n) {
		_size == 0 ? _arr = NULL : _arr = new T[n];
	}
			

	Array<T>(Array<T> const &src) : _arr( NULL ), _size( 0 ) {
		std::cout << "Copy constructor are called" << std::endl;
		*this = src;
	}

	unsigned int size( void ) {
		return this->_size;
	}

	Array<T> &	operator=(Array<T> const & src) {
		if ( this != &src ) {
			delete [] this->_arr;
			this->_size = src._size;
			this->_arr = new T[src._size];
			for (unsigned int i = 0; i < src._size; ++i )
				this->_arr[i] = src._arr[i];
		}
		return *this;
	}

	~Array<T>(void) {
		std::cout << "Destructor are called!" << std::endl;
	}

	T &	operator[]( unsigned int num ) {
		if (num >= this->_size)
			throw std::range_error("range_error");
		else
			return (this->_arr[num]);
	}
	
};