#pragma once 
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#define R_EXECGRADE 45
#define R_SIGNGRADE 72
class RobotomyRequestForm: public AForm
{
private:
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(const std::string &target);
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

