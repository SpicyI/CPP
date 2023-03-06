/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:45:10 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 19:56:07 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " 
    << this->A_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& primary_weapon): _name(name) , A_weapon(primary_weapon)
{}

HumanA::~HumanA()
{  
}
