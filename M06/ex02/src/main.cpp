#include "Base.hpp"

int main(void)
{
	Base test;
	Base *p = test.generate();
	test.identify(p);
	test.identify(*p);
	delete p;
}