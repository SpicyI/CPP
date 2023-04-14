#include "Form.hpp"

/*					Constuctors/Destructors				*/

Form::Form(void)
:formName("paper work"), sign(false), sign_grade(150), exec_grade(150)
{
	std::cout << "Form default constructor is called." << std::endl;
}

Form::Form(const std::string &name, const int &execGrade, const int &signGrade)
:formName(name), sign(false), sign_grade(signGrade), exec_grade(execGrade)
{
	std::cout << "Form parameterized constructor is called." << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
:formName(other.getFormName()), sign(false), sign_grade(other.getSignGrade()),
exec_grade(other.getExecutionGrade())
{
	std::cout << "Form copy constructor is called." << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form default destructor is called." << std::endl;
}

/*				exceptions				*/
const char * Form::GradeTooHighException::what() const throw()
{
	return "Form required grade is too high!";
}

const char * Form::GradeTooLowException::what() const  throw()
{
	return "Form required grade is too low!";
}

/*       getters/setters		*/

std::string  Form::getFormName() const
{
	return (this->formName);
}

bool	Form::getSign() const
{
	return (this->sign);
}

unsigned short Form::getSignGrade() const
{
	return (this->sign_grade);
}

unsigned short Form::getExecutionGrade() const
{
	return (this->exec_grade);
}

/*				Member Funcs		*/
void	Form::BeSigned(const Bureaucrat& employee)
{
	if (this->sign)
		return ;
	if (employee.getGrade() > this->sign_grade)
		throw GradeTooLowException();
	this->sign = !this->sign;
}


/*     oprrators 		*/

Form& Form::operator=(const Form &other)
{
	(void) other;
	return(*this);
}

std::ostream& operator<<(std::ostream &stream, const Form &paper_work)
{
	stream << paper_work.getFormName() 
		<< " require sign grade of " << paper_work.getSignGrade()
		<< " , and execution grade of " << paper_work.getExecutionGrade()
		<< ". Staus is " << paper_work.getSign();  
	return  stream;
}