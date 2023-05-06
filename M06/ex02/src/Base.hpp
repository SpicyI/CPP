#pragma once

#include <iostream>
#include <string>

class Base
{
public:
	virtual ~Base();
	Base * generate(void);
	void identify(Base& p);
	void identify(Base* p);
};


class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};