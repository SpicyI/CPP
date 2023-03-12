/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/12 23:47:30 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::string name = "Turret1";
    std::string name1 = "mo one";
    
    ScravTrap f(name);
    f.attack(name1);
    std::cout << "*************************************\n";
    ScravTrap a(f);
    a.attack(name1);

}