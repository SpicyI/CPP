#pragma once 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>


template <typename T>
int  easyfind(T &container, int value)
{
	typename T::iterator iter =  std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		std::cout << "value not found" << std::endl;
	else
		return *iter;
	return 0;
}