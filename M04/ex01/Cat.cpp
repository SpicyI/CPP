/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:04:55 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 17:07:54 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():  Animal()
{
    std::cout << "Cat default constructor is called." << std::endl;
    type = "Cat";
    head = new Brain;
}

Cat::Cat(const Cat& other): Animal(other) , head(NULL)
{
    std::cout << "Cat copy constructor is called." << std::endl;
    head = new Brain(*(other.head));
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other){
        this->type = other.getType();
        if (head)
            delete head;
        head = new Brain(*(other.head));
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << this->type << " says meaaaaow." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor is called." << std::endl;
    if (head)
        delete head;
}