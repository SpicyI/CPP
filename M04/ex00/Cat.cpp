/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:04:55 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 20:13:31 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():  Animal()
{
    type = "Cat";
    std::cout << "Cat default contructor is called." << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat copy constructor is called." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other){
        this->type = other.getType();
    }
    return *this;
}

void Cat::makesound()
{
    std::cout << this->type << " says meaaaaow." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor is called." << std::endl;
}