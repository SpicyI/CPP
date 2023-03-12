/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/12 17:22:53 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Summoner1;
    ClapTrap Summoner2("spicy");
    ClapTrap Summoner3(Summoner2);
    
    Summoner1.attack("spicy");
    Summoner2.takeDamage(10);
    Summoner2.takeDamage(10);
    Summoner2.beRepaired(10);

    Summoner3.beRepaired(10);
    Summoner3.takeDamage(10);
    Summoner3.takeDamage(10);
    Summoner3.takeDamage(10);
}