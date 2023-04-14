#pragma once 
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#include <fstream>
#define EXECGRADE 137
#define SIGNGRADE 145

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(const std::string &target);
	void execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm(void);
};



