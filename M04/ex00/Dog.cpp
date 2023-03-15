/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:10:43 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 23:27:15 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():  Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor is called." << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy constructor is called." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other){
        this->type = other.getType();
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << this->type << " says wooooaff." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor is called." << std::endl;
}