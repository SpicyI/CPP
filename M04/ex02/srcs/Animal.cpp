/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:41:52 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 18:45:49 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor is called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor is called." << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor is called." << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other){
        this->type = other.getType();
    } 
    return *this;
}

std::string Animal::getType() const
{
    return(this->type);
}