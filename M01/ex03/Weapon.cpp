/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:42:07 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:36:22 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return (this->type);
}
void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}

Weapon::Weapon(std::string new_type)
{
    this->type = new_type;
}

Weapon::~Weapon() {}