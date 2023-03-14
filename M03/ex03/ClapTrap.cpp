/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:19:43 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/15 00:14:16 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*      Contructors/Destrucors   */

ClapTrap::ClapTrap(void): _Name(" Summoner") , _HP(10) , _Energy(10), _AD(0)
{
    std::cout << "Default constructor is called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& id): _Name(id) , _HP(10) , _Energy(10), _AD(0)
{
    std::cout << "Prametric constructor is called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor is called." << std::endl;
    *this = other;
}

// ClapTrap::ClapTrap(std::string id, unsigned int HP , unsigned int AD, unsigned int ENERGY):
// _Name(id) , _HP(HP) , _Energy(ENERGY), _AD(AD)
// {
//     std::cout << "Prametric constructor is called." << std::endl;
// }

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called." << std::endl;
}

/*             Operators           */


ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    this->_Name = other._Name;
    this->_Energy = other._Energy;
    this->_HP = other._HP;
    this->_AD = other._AD;
    return *this;
} 

/*      Member Funcs             */
void ClapTrap::attack(const std::string& target)
{
    if (this->_HP <= 0)
        std::cout << this->_Name << " has no HP." << std::endl; 
    else if (this->_Energy > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " attacks "
            << target << ", causing " << this->_AD << " points of damage!" << std::endl;
        this->_Energy--;
    }
    else 
        std::cout << this->_Name <<" has no Energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HP  <= amount )
    {
        if (this->_HP == 0)
            std::cout << this->_Name << " already dead." << std::endl; 
        else
        {
            this->_HP = 0;
            std::cout << this->_Name << " has been slain." << std::endl; 
        }
    }
    else
    {
        this->_HP -= amount;
        std::cout << this->_Name << " took " << amount << " Physical Damage." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HP  <= 0)
        std::cout << this->_Name << " has no HP." << std::endl;
    else if (this->_Energy <= 0)
        std::cout << this->_Name << " has no Energy." << std::endl;
    else
    {
        this->_HP += amount;
        this->_Energy -= 1;
        std::cout << this->_Name << " healed " << amount << " HP." << std::endl;
    }
}
