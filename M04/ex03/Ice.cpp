/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:37:49 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/17 16:26:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria()
{
    _type = "ice";
}

Ice::Ice(const Ice& other):AMateria(other)
{
    
}

Ice& Ice::operator=(const Ice& other)
{
    (void) other;
    return *this;
}


Ice::~Ice()
{
    
}

AMateria* Ice::clone() const
{
    AMateria *newIce = new Ice;
    return newIce;
}

void Ice::use(ICharacter& target)
{
    ICharacter *nullChar = 0;
    if (&target == nullChar)
        return;
    std::cout<<"* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}