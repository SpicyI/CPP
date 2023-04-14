/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:28:08 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/13 05:57:00 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test(std::string name , int ex ,  int sgn)
{
	try {
		Form paper(name , ex , sgn);
		std::cout << paper << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;	
	}
}

int main(void)
{
	test("490" , 50 , 120);
	test("491" , 0 , 120);
	test("492" , 50 , 151);
	test("493" , -2 , 1550);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	Bureaucrat supervisor("Jef", 100);
	Bureaucrat HR("Kem", 45);
	Bureaucrat HR_head("Sam", 25);
	
	Form paper("law" , 23, 90);
	Form paper2("law2" , 3, 9);
	Form petition = paper;
	supervisor.signForm(paper);
	HR.signForm(paper);
	HR_head.signForm(paper);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	std::cout << petition << std::endl;
}