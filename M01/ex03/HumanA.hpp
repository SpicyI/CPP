/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:20:04 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 19:48:01 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon& A_weapon;
public:
    void attack();
    HumanA(std::string name, Weapon& primary_weapon);
    ~HumanA();
};