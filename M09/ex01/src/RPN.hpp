#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
private:
	std::stack<int> _stack;

	void add();
	void subtract();
	void multiply();
	void divide();
	void Rpn_push(std::string& token);
public:
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	void calculate(std::string expression);

	~RPN();
};

void trimstr(std::string& str);