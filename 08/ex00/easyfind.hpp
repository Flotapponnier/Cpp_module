#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class NotFoundException : public std::exception {
	const char* what() const throw()
	{
		return "Element not found in the container.";
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp" 

#endif
