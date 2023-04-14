/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:28:08 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/14 22:05:56 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test1()
{
	Intern nobody;
	AForm *form1;
	form1 = nobody.makeForm("RobotomyRequest", "quark");
	if (form1)
	{
		std::cout << *form1 << std::endl;
		delete form1;
	}
}

void test2()
{
	Intern nobody;
	AForm *form1;
	form1 = nobody.makeForm("noType", "quark");
	if (form1)
	{
		std::cout << *form1 << std::endl;
		delete form1;
	}
}

void test3()
{
	Intern nobody;
	AForm *form1;
	form1 = nobody.makeForm("ShrubberyCreation", "quark");
	Bureaucrat keven("keven", 1);
	if (form1)
	{
		std::cout << *form1 << std::endl;
		keven.signForm(*form1);
		keven.executeForm(*form1);
		delete form1;
	}
}

int main(void)
{
	test1();
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	test2();
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	test3();
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
}