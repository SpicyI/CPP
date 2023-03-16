/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:37:49 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 20:50:16 by del-khay         ###   ########.fr       */
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
    std::cout<<"* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}