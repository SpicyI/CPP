/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:10:04 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 20:41:53 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Materia.hpp"

class Ice : public AMateria
{

public:
    Ice();
    Ice(const Ice& other);

    Ice& operator=(const Ice& other);

    AMateria* clone() const;
    void use(ICharacter& taget);
    ~Ice();
};
