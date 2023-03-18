/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:56:38 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/17 16:08:07 by del-khay         ###   ########.fr       */
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

Character::Character(const std::string& name): _name(name)
{
    for(int i = 0; i < inventory_size ; i++)
        inventory[i] = NULL;
}

Character::Character(const  Character& other)
{
    *this = other;
    
}

Character& Character::operator=(const Character& other)
{
    if(this == &other)
        return *this;
    this->_name = other.getName();
    for(int i = 0; i < inventory_size ; i++)
    {
        if (inventory[i])
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
    return *this;
    
}
/*                   member Func      */

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    
    while (i < inventory_size && this->inventory[i])
        i++;
    if (i == inventory_size)
    {
        delete m;
        return ; // can't equuip and add materia to be deleted later.
    }
    this->inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= inventory_size)
        return ;
    // delete inventory[idx];
    this->inventory[idx] = NULL;
    
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= inventory_size)
        return ;
    if (inventory[idx])
    {
        this->inventory[idx]->use(target);
    }
}

AMateria* Character::getMateria(int idx)
{
    if (idx < 0 || idx >= inventory_size)
        return  0;
    return(inventory[idx]);
}
