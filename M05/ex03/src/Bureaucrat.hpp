/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:27:59 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/14 04:59:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma  once 
#include <iostream>
#include <exception>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	unsigned short		grade;
	Bureaucrat(void);
public:
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
			const char* what() const throw();
	};

	Bureaucrat(const Bureaucrat &other);
	Bureaucrat(const std::string &id, const int &rank);
	~Bureaucrat();
	std::string getName() const;
	unsigned short getGrade() const;
	void promote();
	void demote();
	void signForm(AForm& paper_work);
	void executeForm(AForm const & form);
	Bureaucrat& operator=(const Bureaucrat &other);
};

std::ostream& operator<<(std::ostream& stream ,const Bureaucrat& employee);



