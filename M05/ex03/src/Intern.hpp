#pragma once 
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class Intern
{
public:
	class TypeNotFound: public std::exception
	{
		const char * what() const throw();
	};
	AForm * makeForm(const std::string &form_name , const std::string &target);
	Intern(void);
	Intern(const Intern &other);
	Intern& operator=(const Intern &other);
	~Intern(void);
};
