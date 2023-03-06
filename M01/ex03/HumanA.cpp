/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:45:10 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 17:52:34 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon A_weapon;
public:
    void attack();
    HumanA(std::string name, Weapon primary_weapon);
    ~HumanA();
};

void HumanA::attack()
{
    
}

HumanA::HumanA(std::string name, Weapon primary_weapon)
{
}

HumanA::~HumanA()
{
}
