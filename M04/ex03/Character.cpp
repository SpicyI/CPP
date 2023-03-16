/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:56:38 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 21:33:59 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("npc")
{
    for(int i = 0; i < inventory_size ; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < inventory_size ; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}

/*                   member Func      */

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    
    while (i < inventory_size && !this->inventory[i])
        i++;
    if (i == inventory_size)
        return ; // can't equuip and add materia to be deleted later.
    this->inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= inventory_size)
        return ;
    AMateria *detach = this->inventory[idx];
    this->inventory[idx] = NULL;
    // add detach to the floor to be deleted later;
    
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= inventory_size)
        return ;
    this->inventory[idx]->use(target);
}