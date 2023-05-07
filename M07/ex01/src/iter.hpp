#pragma once 
#
#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T *add, size_t len ,F func)
{
	for (size_t i = 0; i < len; i++)
		func(add[i]);
}

template <typename V>
void printValue(V value)
{
	std::cout << value << std::endl;
}