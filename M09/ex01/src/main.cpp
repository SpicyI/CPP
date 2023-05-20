#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: invalid arguments." << std::endl;
		return 1;
	}

	RPN rpn;
	try
	{
		rpn.calculate(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error "<<e.what() << '\n';
		return 1;
	}
}