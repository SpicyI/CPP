/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:16:57 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 23:43:56 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

/*                     Cons/destructors           */
AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria& other)
{
    (void) other;
}

AMateria::AMateria(std::string const & type): _type(type)
{
    
}

AMateria::~AMateria()
{
    
}

/*                     opretors                       */
AMateria& AMateria::operator=(const AMateria& other)
{
    (void)other;
    return *this;
}



/*                getters/setters           */

std::string const & AMateria::getType() const
{
    return(_type);
}
 /*                   memeber Funcs       */

void  AMateria::use(ICharacter& target)
{
    (void) target;
}

