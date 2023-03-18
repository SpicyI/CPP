/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:53:46 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/17 16:26:08 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria()
{
    _type = "cure";
}

Cure::Cure(const Cure& other):AMateria(other)
{
    
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
        return *this;
    return *this;
}


Cure::~Cure()
{
    
}

AMateria* Cure::clone() const
{
    AMateria *newCure = new Cure;
    return newCure;
}

void Cure::use(ICharacter& target)
{

    ICharacter *nullChar = 0;
    if (&target == nullChar)
        return;
    std::cout<<"* heals " << target.getName() <<"'s wounds *" << std::endl;
}