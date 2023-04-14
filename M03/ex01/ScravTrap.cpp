/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:50:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 17:26:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& id):ClapTrap(id)
{
    std::cout << "Scrav Parameterized contructor is called" << std::endl;
    _HP = 100;
    _AD = 20;
    _Energy = 50;
}

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "Scrav default contructor is called" << std::endl;
    _HP = 100;
    _AD = 20;
    _Energy = 50;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "Scrav copy contructor is called." << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "Scrav destructor is called" << std::endl;
}

/*          Operator   */
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string& target)
{
    if (this->_HP <= 0)
        std::cout << this->_Name << " has no HP." << std::endl; 
    else if (this->_Energy > 0)
    {
        std::cout << "ScavTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AD << " points of damage!" << std::endl;
        this->_Energy--;
    }
    else 
        std::cout << this->_Name <<" has no Energy." << std::endl;
}

void ScavTrap::guardGate()
{
   std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
