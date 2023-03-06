/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:28:59 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 19:52:58 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* B_weapon;
public:
    void attack();
    void setWeapon(Weapon& picked_weapon);
    HumanB(std::string name);
    ~HumanB();
};
