#include "Span.hpp"

Span::Span(unsigned int const max):data_set(){
	data_set.reserve(max);
}

Span::Span():data_set(){}

Span::~Span()
{
}

Span::Span(const Span &other_span):data_set(other_span.data_set)
{

}

Span& Span::operator=(const Span & other_span)
{
	if (this != &other_span)
		data_set = other_span.data_set;
	return *this;
}


void Span::addNumber(int n)
{
	if(data_set.size() >= data_set.capacity() && data_set.size() != 0)
	{
		std::cout << data_set.size() << data_set.capacity() << std::endl;
		throw (OutOfRange());
	}
	data_set.push_back(n);
}

const char* Span::OutOfRange::what() const throw()
{
	return "Data is at max capacity";
}

const char* Span::EmptySpans::what() const throw()
{
	return "Can not look for a span with no numbers sorted";
}

int Span::shortestSpan()
{
	if (data_set.size() <= 1)
		throw(EmptySpans());
	std::sort(data_set.begin(), data_set.end());
	int smoll_span = *(data_set.begin() + 1) - *data_set.begin();
	for(std::vector<int>::iterator it = data_set.begin(); it + 1 < data_set.end(); it++)
	{
		if (*(it + 1) - *it <= smoll_span)
			smoll_span = *(it + 1) - *it;
	}
	return smoll_span;
}

int Span::longestSpan()
{
	if (data_set.size() <= 1)
		throw(EmptySpans());
	
	std::sort(data_set.begin(), data_set.end());

	return *(data_set.end() - 1) - *(data_set.begin());
}