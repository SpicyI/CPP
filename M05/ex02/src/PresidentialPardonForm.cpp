#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
:AForm("noLaw", P_EXECGRADE, P_SIGNGRADE)
{
	std::cout << "PresidentialPardon default constructor is called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:AForm(target , P_EXECGRADE, P_SIGNGRADE)
{
	std::cout << "PresidentialPardon parameterized constructor is called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardon destructor is called." << std::endl;
}

/*					member func					*/
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw FormNotSigned();
	if (executor.getGrade() > this->getExecutionGrade())
		throw GradeTooLowException();
	std::cout << this->getFormName() 
		<< " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}