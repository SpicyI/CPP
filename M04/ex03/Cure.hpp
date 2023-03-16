/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:53:29 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 20:53:38 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Materia.hpp"

class Cure : public AMateria
{

public:
    Cure();
    Cure(const Cure& other);

    Cure& operator=(const Cure& other);

    AMateria* clone() const;
    void use(ICharacter& taget);
    ~Cure();
};