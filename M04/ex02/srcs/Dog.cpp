/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:10:43 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 18:17:38 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog():  Animal() , head(NULL)
{
    std::cout << "Dog default constructor is called." << std::endl;
    type = "Dog";
    head = new Brain;
}

Dog::Dog(const Dog& other): Animal(other) , head(NULL)
{
    std::cout << "Dog copy constructor is called." << std::endl;
    this->head = new Brain(*(other.head));
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other){
        this->type = other.getType();
        if (head)
        {
            delete head;
            head = NULL;
        }
        head = new Brain(*(other.head));
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
    if (head)
        delete head;
}