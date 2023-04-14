#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
:AForm("Nolaw", R_EXECGRADE ,R_SIGNGRADE)
{
	std::cout << "Robot default constructor is called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robot destructor is called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:AForm(target , R_EXECGRADE , R_SIGNGRADE)
{
	std::cout << "Robot parameterized constructor is called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
:AForm(other)
{
	std::cout << "Robot copy constructor is called." << std::endl;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw FormNotSigned();
	if (executor.getGrade() > this->getExecutionGrade())
		throw GradeTooLowException();
	std::cout << "Brrrrrrrrrrrrrrrrr." << std::endl;
	std::srand(std::time(nullptr));
	int chance = std::rand()%100;
	std::cout << "num is =" << chance << std::endl;
	if (chance % 2){
		std::cout << this->getFormName() 
			<< " has been robotomized successfully."
			<< std::endl;
	}
	else{
		std::cout << this->getFormName()
			<< " robotomy failed." << std::endl;
	}
}

/*				operator			*/
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return *this;
}
