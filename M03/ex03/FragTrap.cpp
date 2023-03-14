/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:36:22 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 17:36:23 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& id):ClapTrap(id)
{
    std::cout << "Frag parametric contructor is called" << std::endl;
    _HP = 100;
    _AD = 30;
    _Energy = 100;
}

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "Frag default contructor is called" << std::endl;
    _HP = 100;
    _AD = 30;
    _Energy = 100;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "Frag copy contructor is called." << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "Frag destructor is called" << std::endl;
}

/*          Operator   */
FragTrap& FragTrap::operator=(const FragTrap &other)
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

void FragTrap::attack(const std::string& target)
{
        if (this->_HP <= 0)
        std::cout << this->_Name << " has no HP." << std::endl; 
    else if (this->_Energy > 0)
    {
        std::cout << "FragTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AD << " points of damage!" << std::endl;
        this->_Energy--;
    }
    else 
        std::cout << this->_Name <<" has no Energy." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_Name << " is giving a High5." <<std::endl;
}