#pragma once 
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#define P_EXECGRADE 5
#define P_SIGNGRADE 25

class PresidentialPardonForm: public AForm
{
private:
	PresidentialPardonForm(void);
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
	void execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm(void);

};

