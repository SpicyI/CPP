/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:10:16 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 23:38:08 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor is called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << " WrongAnimal copy constructor is called." << std::endl;
    *this = other;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal syas Moooooooooooo." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other){
        this->type = other.getType();
    } 
    return *this;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}