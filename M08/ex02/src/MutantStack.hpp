#pragma once

#include <iostream>
#include <stack>
#include <deque>
#include <vector>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
	typedef typename container::iterator
		iterator;
	typedef typename container::const_iterator
		const_iterator;
	typedef typename container::reverse_iterator
		reverse_iterator;
	typedef typename container::const_reverse_iterator
		const_reverse_iterator;
	MutantStack(){};
	MutantStack(const MutantStack &other) : std::stack<T, container>(other){};
	~MutantStack(){};

	MutantStack &operator=(const MutantStack &other)
	{
		*this = other;
	};

	iterator begin(){ return this->c.begin(); }
	iterator end(){ return this->c.end(); }

	const_iterator cbegin(){ return this->c.cbegin(); }
	const_iterator cend(){ return this->c.cend(); }

	reverse_iterator rbegin(){ return this->c.rbegin(); }
	reverse_iterator rend(){ return this->c.rend(); }

	const_reverse_iterator crbegin(){ return this->c.crbegin(); }
	const_reverse_iterator crend(){ return this->c.crend(); }
};