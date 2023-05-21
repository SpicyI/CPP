#include "PmergeMe.hpp"

int convertstr(char* value)
{
	char *endptr;
	size_t ret = strtol(value, &endptr, 10);
	if (*endptr != 0 || ret < 0 || ret > INT_MAX)
		throw std::invalid_argument("invalid argument " + std::string(value));
	return ret;
}

int main(int ac , char **av)
{
	if (ac < 2){
		std::cout << "Error: no arguments." << std::endl;
		return 1;
	}

	PmergeMe p;
	std::ostringstream out;

	try 
	{
		for (int i = 1; i < ac ; i++)
		{
			p.push(convertstr(av[i]));
			out << av[i] << ' ';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		out.clear();
		return 1;
	}
	std::cout << "before: " << out.str() << std::endl;
	p.sort();
	std::cout << "after: ";
	p.display();
}
