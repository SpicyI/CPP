#include "RPN.hpp"

void trimstr(std::string& str)
{
	std::string::iterator it = str.begin();
	while (it != str.end() && std::isspace(*it))
		it++;
	str.erase(str.begin(), it);
	it = str.end() - 1;
	while (it != str.begin() && std::isspace(*it))
		it--;
	str.erase(it + 1, str.end());
}

// RPN
RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		this->_stack = other._stack;
	}
	return *this;
}

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::calculate(std::string expression)
{
	std::stringstream ss;
	std::string token;

	ss << expression;
	while (std::getline(ss, token, ' '))
	{
		if (token.empty())
			continue;
		trimstr(token);
		if (token == "+")
			add();
		else if (token == "-")
			subtract();
		else if (token == "*")
			multiply();
		else if (token == "/")
			divide();
		else
			Rpn_push(token);
		token.clear();
	}
	if (!this->_stack.size())
		throw std::invalid_argument("stack is empty");
	else if (this->_stack.size() != 1)
		throw std::invalid_argument("stack has more than 1 element");
	ss.clear();
	std::cout << this->_stack.top() << std::endl;
}

void RPN::Rpn_push(std::string& token)
{
	char *endptr = 0;
	int value = static_cast<int> (std::strtol(token.c_str(), &endptr, 10));
	if (*endptr != '\0' || value >= 10 || !token.size())
		throw std::invalid_argument("");
	this->_stack.push(value);
}

void RPN::add()
{
	if(this->_stack.empty() || this->_stack.size() < 2)
		throw std::invalid_argument("stack is empty or has less than 2 elements");
	int a = this->_stack.top();
	this->_stack.pop();
	int b = this->_stack.top();
	this->_stack.pop();
	this->_stack.push(a + b);
}

void RPN::subtract()
{
	if(this->_stack.empty() || this->_stack.size() < 2)
		throw std::invalid_argument("stack is empty or has less than 2 elements");
	int a = this->_stack.top();
	this->_stack.pop();
	int b = this->_stack.top();
	this->_stack.pop();
	this->_stack.push(b - a);
}

void RPN::multiply()
{
	if(this->_stack.empty() || this->_stack.size() < 2)
		throw std::invalid_argument("stack is empty or has less than 2 elements");
	int a = this->_stack.top();
	this->_stack.pop();
	int b = this->_stack.top();
	this->_stack.pop();
	this->_stack.push(a * b);
}

void RPN::divide()
{
	if(this->_stack.empty() || this->_stack.size() < 2)
		throw std::invalid_argument("stack is empty or has less than 2 elements");
	int a = this->_stack.top();
	this->_stack.pop();
	int b = this->_stack.top();
	this->_stack.pop();
	if (a == 0)
		throw std::invalid_argument("division by zero");
	this->_stack.push(b / a);
}