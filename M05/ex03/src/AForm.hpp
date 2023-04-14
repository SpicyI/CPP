#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class AForm
{
private:
	const std::string formName;
	bool sign;
	const unsigned short sign_grade;
	const unsigned short exec_grade;
	AForm(void);
public:
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
			const char* what() const throw();
	};
	class FormNotSigned : public std::exception
	{
		const char *what() const throw(); 
	};
	AForm(const std::string &name, const int &execGrade, const int &signGrade);
	AForm(const AForm &other);
	virtual ~AForm();

	std::string  getFormName() const;
	bool	getSign() const;
	unsigned short getSignGrade() const;
	unsigned short getExecutionGrade() const;
	void	BeSigned(const Bureaucrat &employee);
	virtual void  execute(Bureaucrat const & executor)const = 0;
	AForm& operator=(const AForm &other);
};

std::ostream& operator<<(std::ostream &stream, const AForm &paper_work);
