/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:50:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/12 23:44:23 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string& id):ClapTrap(id, 100 , 20 , 50)
{
    std::cout << "Scrav parametric contructor is called" << std::endl;
}

ScravTrap::ScravTrap()
{
    std::cout << "Scrav contructor is called" << std::endl;
}

ScravTrap::ScravTrap(ScravTrap& other)
{
    std::cout << "Scrav copy contructor is called." << std::endl;
    *this = other;
}


ScravTrap::~ScravTrap()
{
    std::cout << "Scrav destructor is called" << std::endl;
}

/*          Operator   */
void ScravTrap::operator=(const ScravTrap &other)
{
    (void)other;
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
