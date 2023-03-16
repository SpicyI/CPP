/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:00:41 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 21:03:44 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;
public:
    AMateria();
    AMateria(const AMateria& other);
    AMateria(std::string const & type);
    AMateria& operator=(const AMateria& other);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};