/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:38:18 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:30:56 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &picked_weapon)
{
    this->B_weapon = &picked_weapon;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their ";
    if (B_weapon)
    {
        std::cout << B_weapon->getType() << std::endl;
    }
    else
    {
        std::cout << "thier hands" << std::endl;
    }
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->B_weapon = NULL;
}

HumanB::~HumanB()
{
}
