/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 18:25:57 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Jerry");
    std::cout << std::endl;
    DiamondTrap b(a);
    std::cout << std::endl;
    DiamondTrap c;
    c = b;
    std::cout << std::endl;

    a.highFivesGuys();
    a.guardGate();
    a.whoAmI();
    a.attack("rick");
    std::cout << std::endl;
    
    c.attack("Morty");
    a.takeDamage(50);
    a.beRepaired(50);
    a.takeDamage(100);
    a.beRepaired(10);
}