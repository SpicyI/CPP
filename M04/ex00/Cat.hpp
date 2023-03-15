/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:48:26 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 20:09:09 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal 
{
public:
    Cat();
    Cat(const Cat& other);
    
    Cat& operator=(const Cat& other);
    void makesound();
    
    ~Cat();
};

