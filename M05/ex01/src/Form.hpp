#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class Form
{
private:
	const std::string formName;
	bool sign;
	const unsigned short sign_grade;
	const unsigned short exec_grade;
	Form(void);
public:
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
			const char* what() const throw();
	};
	Form(const std::string &name, const int &execGrade, const int &signGrade);
	Form(const Form &other);
	~Form();

	std::string  getFormName() const;
	bool	getSign() const;
	unsigned short getSignGrade() const;
	unsigned short getExecutionGrade() const;
	void	BeSigned(const Bureaucrat &employee);
	Form& operator=(const Form &other);
};

std::ostream& operator<<(std::ostream &stream, const Form &paper_work);