#include "Base.hpp"

Base::~Base() {}

Base *Base::generate(void)
{
	std::srand(std::time(NULL));
	int p = rand() % 3;
	switch (p)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	}
	return NULL;
}

void Base::identify(Base *p)
{
	std::cout << "/ PTR:" << std::endl;
	A *id = dynamic_cast<A *>(p);
	B *id1 = dynamic_cast<B *>(p);
	C *id2 = dynamic_cast<C *>(p);
	if (id)
		std::cout << "A type" << std::endl;
	else if (id1)
		std::cout << "B type" << std::endl;
	else if (id2)
		std::cout << "C type" << std::endl;
}

void Base::identify(Base &p)
{
	std::cout << "/ REF:" << std::endl;
	try
	{
		A &id = dynamic_cast<A &>(p);
		(void)id;
		std::cout << "A type" << std::endl;
	}
	catch (...)
	{
		try
		{
			B &id = dynamic_cast<B &>(p);

			(void)id;
			std::cout << "B type" << std::endl;
		}
		catch (...)
		{
			try
			{
				C &id = dynamic_cast<C &>(p);

				(void)id;
				std::cout << "C type" << std::endl;
			}
			catch (...)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}
