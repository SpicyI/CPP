/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:50:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 21:06:17 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScravTrap.hpp"

ScravTrap::ScravTrap(const std::string& id):ClapTrap(id)
{
    std::cout << "Scrav parametric contructor is called" << std::endl;
    _HP = 100;
    _AD = 20;
    _Energy = 50;
}

ScravTrap::ScravTrap():ClapTrap()
{
    std::cout << "Scrav default contructor is called" << std::endl;
    _HP = 100;
    _AD = 20;
    _Energy = 50;
}

ScravTrap::ScravTrap(const ScravTrap& other): ClapTrap(other)
{
    std::cout << "Scrav copy contructor is called." << std::endl;
}


ScravTrap::~ScravTrap()
{
    std::cout << "Scrav destructor is called" << std::endl;
}

/*          Operator   */
ScravTrap& ScravTrap::operator=(const ScravTrap &other)
{
    if (this == &other)
        return *this;
    this->_Name = other._Name;
    this->_Energy = other._Energy;
    this->_HP = other._HP;
    this->_AD = other._AD;
    return *this;
}

/*  Memeber Func */

void ScravTrap::attack(std::string& target)
{
        if (this->_HP <= 0)
        std::cout << this->_Name << " has no HP." << std::endl; 
    else if (this->_Energy > 0)
    {
        std::cout << "ScravTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AD << " points of damage!" << std::endl;
        this->_Energy--;
    }
    else 
        std::cout << this->_Name <<" has no Energy." << std::endl;
}

void ScravTrap::guardGate()
{
   std::cout << "ScravTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
