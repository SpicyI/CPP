/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:58:37 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 19:42:09 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);

    std::string getType() const;
    virtual void makesound();
    ~Animal();
};
