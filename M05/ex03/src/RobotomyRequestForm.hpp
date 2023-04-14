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
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

