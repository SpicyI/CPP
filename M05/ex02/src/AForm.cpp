#include "AForm.hpp"

/*					Constuctors/Destructors				*/

AForm::AForm(void)
:formName("paper work"), sign(false), sign_grade(150), exec_grade(150)
{
	std::cout << "Form default constructor is called." << std::endl;
}

AForm::AForm(const std::string &name, const int &execGrade, const int &signGrade)
:formName(name), sign(false), sign_grade(signGrade), exec_grade(execGrade)
{
	std::cout << "Form parameterized constructor is called." << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
:formName(other.getFormName()), sign(false), sign_grade(other.getSignGrade()),
exec_grade(other.getExecutionGrade())
{
	std::cout << "Form copy constructor is called." << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Form default destructor is called." << std::endl;
}

/*				exceptions				*/
const char * AForm::GradeTooHighException::what() const throw()
{
	return "Form required grade is too high!";
}

const char * AForm::GradeTooLowException::what() const  throw()
{
	return "Form required grade is too low!";
}
const char * AForm::FormNotSigned::what(void) const throw()
{
	return "Form not signed!";
}

/*       getters/setters		*/

std::string  AForm::getFormName() const
{
	return (this->formName);
}

bool	AForm::getSign() const
{
	return (this->sign);
}

unsigned short AForm::getSignGrade() const
{
	return (this->sign_grade);
}

unsigned short AForm::getExecutionGrade() const
{
	return (this->exec_grade);
}

/*				Member Funcs		*/
void	AForm::BeSigned(const Bureaucrat& employee)
{
	if (this->sign)
		return ;
	if (employee.getGrade() > this->sign_grade)
		throw GradeTooLowException();
	this->sign = !this->sign;
}


/*     oprrators 		*/

AForm& AForm::operator=(const AForm &other)
{
	(void) other;
	return(*this);
}

std::ostream& operator<<(std::ostream &stream, const AForm &paper_work)
{
	stream << paper_work.getFormName() 
		<< " require sign grade of " << paper_work.getSignGrade()
		<< " , and execution grade of " << paper_work.getExecutionGrade()
		<< ". Staus is " << paper_work.getSign();  
	return  stream;
}