#pragma once 

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
private:
	std::vector<int> data_set;
	Span();
public:
	class OutOfRange : public std::exception
	{
		const char *what() const throw();
	};
	class EmptySpans : public std::exception
	{
		const char *what() const throw();
	};
	Span(unsigned int const max);
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	template<typename Iter>
	void insertNumbers(Iter start, Iter end)
	{
		unsigned long dis = std::distance(start, end);
		// std::cout << dis <<  "," <<data_set.capacity() << std::endl;
		if (dis > data_set.capacity())
			throw OutOfRange();
		while (start != end)
		{
			this->addNumber(*start);
			start++;
		}
	}
	~Span();
};



