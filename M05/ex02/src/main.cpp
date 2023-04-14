/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:28:08 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/14 05:33:46 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
void test1()
{
	ShrubberyCreationForm form1("490");
	Bureaucrat Joe("Joe" , 130);
	Bureaucrat Moe("Moe" , 140);
	std::cout << std::endl;
	Moe.signForm(form1);
	Moe.executeForm(form1);
	Joe.executeForm(form1);
	std::cout << std::endl;
}

void	test2()
{
	RobotomyRequestForm form1("164");
	Bureaucrat Rick("Rick" , 75);
	Bureaucrat May("May" , 130);
	Bureaucrat Kim("Kim", 40);
	std::cout << std::endl;
	May.signForm(form1);
	May.executeForm(form1);
	Rick.executeForm(form1);
	Kim.signForm(form1);
	Kim.executeForm(form1);
	std::cout << std::endl;
}

void	test3()
{
	PresidentialPardonForm form1("hamdallah");
	Bureaucrat kally("Kally" , 1);
	std::cout << std::endl;
	kally.executeForm(form1);
	kally.signForm(form1);
	kally.executeForm(form1);
	std::cout << std::endl;
	
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