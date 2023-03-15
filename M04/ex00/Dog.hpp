/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:09:16 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 20:12:37 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog& other);
    
    Dog& operator=(const Dog& other);
    void makesound();
    
    ~Dog();
};

