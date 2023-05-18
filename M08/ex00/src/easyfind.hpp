#pragma once 
#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>
#include <queue>
#include <list>

class Not_found: public std::exception
{
	const char* what() const throw()
	{
		return "Container has no such value";
	}
};



template <typename T>
int  easyfind(const T &container, int value)
{
	typename T::const_iterator iter =  std::find(container.cbegin(), container.cend(), value);
	if (iter == container.cend())
		throw Not_found();
	return *iter;
}