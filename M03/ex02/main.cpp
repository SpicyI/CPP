/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/05/19 18:14:52 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("Jerry");
    std::cout << std::endl;
    FragTrap b(a);
    std::cout << std::endl;
    FragTrap c;
    c = b;
    std::cout << std::endl;

    a.highFivesGuys();
    b.attack("rick");
    a.takeDamage(50);
    a.beRepaired(50);
    a.takeDamage(100);
    a.beRepaired(10);


}