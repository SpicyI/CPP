/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:48:26 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 00:29:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
private:
    Brain *head;
public:
    Cat();
    Cat(const Cat& other);
    
    Cat& operator=(const Cat& other);
    void makeSound() const;
    
    ~Cat();
};

