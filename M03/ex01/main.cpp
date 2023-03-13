/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:15:21 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 19:56:25 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::string name = "Turret1";
    std::string name1 = "no one";
    
    ScravTrap f(name);
    ScravTrap f("rthfgh");
    f.attack(name1);
    ScravTrap a;
    a.guardGate();
    a = f;
    a.attack(name1);
    a.guardGate();

}