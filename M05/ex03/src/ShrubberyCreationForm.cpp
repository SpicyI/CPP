#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
:AForm("noLaw",EXECGRADE,SIGNGRADE)
{
	std::cout << "Shrubbery default constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:AForm(target, EXECGRADE,SIGNGRADE)
{
	std::cout << "Shrubbery parameterized constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
:AForm(other)
{
	std::cout << "Shrubbery copy constructor is called." << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout<< "Shrubbery destructor is called." << std::endl;
}

/*				member Func					*/
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw FormNotSigned();
	if (executor.getGrade() > this->getExecutionGrade())
		throw GradeTooLowException();
	std::ofstream outfile;
	outfile.open(this->getFormName().append("_shrubbery "));
	std::string			shrubbery =	"               ,@@@@@@@,\n"
							   						"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							   						"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							   						"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							   						"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							   						"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							   						"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							   						"       |o|        | |         | |\n"
							   						"       |.|        | |         | |\n"
							   						"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
	if (!outfile){
		std::cout << "Can't creat outfile, but anyways here is you stupid tree :\n"
			<< shrubbery << std::endl; 
		return ;
	}
	outfile << shrubbery << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

