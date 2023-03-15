/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:08:18 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 23:13:42 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():  WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat default contructor is called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor is called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other){
        this->type = other.getType();
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " says meaaaaow." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor is called." << std::endl;
}