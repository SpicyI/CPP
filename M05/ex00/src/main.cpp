/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:27:32 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/13 00:27:33 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test(std::string id , int rank)
{
	try{
		Bureaucrat employee(id, rank);
		std::cout << employee << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr<< e.what() << std::endl;
	}
}

int main(void)
{
	test("James", 1);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	test("Lois", 150);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	test("Pam", -15);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	test("Jim", 157);
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	Bureaucrat employee("Dwight", 1);
	try
	{
		employee.promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	Bureaucrat  employee1("Erin", 150);
	try
	{
		employee1.demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat employee2("kelly" , 100);
	try
	{
		employee2.demote();
		employee2.demote();
		employee2.promote();
		std::cout << employee2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}