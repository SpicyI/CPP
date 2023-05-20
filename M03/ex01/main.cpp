/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/05/19 18:14:37 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap a("Jhon");
    std::cout << std::endl;
    ScavTrap b(a);
    std::cout << std::endl;
    ScavTrap c;
    c = b;
    std::cout << std::endl;

    a.guardGate();
    b.attack("Merry");
    a.takeDamage(50);
    a.beRepaired(50);
    a.takeDamage(100);
    a.beRepaired(10);
}