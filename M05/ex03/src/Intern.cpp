#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Inter default constructor is called." << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Inter default destructor is called." << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "Inter copy constructor is called." << std::endl;
}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

/*					member func				*/
AForm * Intern::makeForm(const std::string &form_name , const std::string &target)
{
	std::string types[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	int i = -1;
	while (++i < 3)
        if (form_name == types[i])
            break;
	try{
	switch (i)
	{
	case 0:
		return new PresidentialPardonForm(target);
		break;
	case 1:
		return new RobotomyRequestForm(target);
		break;
	case 2:
		return new ShrubberyCreationForm(target);
		break;
	default:
		throw TypeNotFound();
	}
	}
	catch(std::exception &e){
		std::cout << "Inter couldn't make the form because "
			<< e.what() << std::endl;
		return NULL;
	}
}

/*						exception				*/
const char * Intern::TypeNotFound::what() const throw()
{
	return "type not found";
}

