#pragma once 

#include "iostream"
#include "string"


template <typename T> 
void swap(T &x ,T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T> 
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T> 
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}