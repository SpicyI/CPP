#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		this->_deque = other._deque;
	}
	return *this;
}

void PmergeMe::push(int value)
{
	this->_deque.push_back(value);
	this->_vector.push_back(value);
}

void PmergeMe::display()
{
	for(size_t i  = 0; i < _deque.size(); i++)
		std::cout << _deque[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _deque.size()
		<< "elements with std::deque : " 
		<< std::fixed << _deqtime <<" us" << std::endl;
		
	std::cout << "Time to process a range of " << _deque.size()
		<< "elements with std::vector : " 
		<< std::fixed <<_vectime <<" us" << std::endl;
}
void PmergeMe::sort()
{
	clock_t start, end;
	// double us_time = 1000000;
	start = clock();
	mi_sort(_deque, 0, _deque.size());
	end = clock();
	_deqtime = (static_cast<double>(end - start) / CLOCKS_PER_SEC);
	start = clock();
	mi_sort(_vector, 0, _vector.size());
	end = clock();
	_vectime = (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}