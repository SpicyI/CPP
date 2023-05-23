#pragma once 

#include <iostream>
#include <sstream>
#include <exception>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include <limits.h>
# define K  10
class PmergeMe
{
private:
	std::deque<int> _deque;
	std::vector<int> _vector;
	double _vectime, _deqtime;
	template <typename T>
	void insertion_sort(T& container, size_t start, size_t end)
	{
		for (size_t i = start + 1; i < end; i++)
		{
			int key = container[i];
			int j = i - 1;
			while (j >= static_cast<int>(start) && container[j] > key)
			{
				container[j + 1] = container[j];
				j--;
			}
			container[j + 1] = key;
		}
	}
	template <typename T>
	void merge(T& container, size_t start, size_t mid, size_t end)
	{
		size_t i = start;
		size_t j = mid;
		T temp;
		while (i < mid && j < end)
		{
			if (container[i] < container[j])
				temp.push_back(container[i++]);
			else
				temp.push_back(container[j++]);
		}
		while (i < mid)
			temp.push_back(container[i++]);
		while (j < end)
			temp.push_back(container[j++]);
		for (size_t i = start; i < end; i++)
			container[i] = temp[i - start];
	}

	template <typename T>
	void mi_sort(T& container , size_t start, size_t end)
	{
		if (end - start > K){
			size_t mid = (start + end) / 2;
			mi_sort(container, start, mid);
			mi_sort(container, mid, end);
			merge(container, start, mid, end);
		}
		else
			insertion_sort(container, start, end);
	}
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	void push(int value);
	void sort();
	void display();

	~PmergeMe();
};