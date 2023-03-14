/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:59:03 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 18:25:35 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//         Constructor / destructors      //
DiamondTrap::DiamondTrap(): ClapTrap(), _Name("Random")
{
     std::cout << "Diamond default contructor is called" << std::endl;
     this->_Energy = 50;
     ClapTrap::_Name = "Random_clap_name";
}

DiamondTrap::DiamondTrap(const std::string &id):
ClapTrap(id + "_clap_name"), ScravTrap(id) , FragTrap(id)
{
    std::cout << "Diamond parametric constructor is called." << std::endl;
    DiamondTrap::_Name = id;
    this->_Energy = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
    ClapTrap(other), ScravTrap(other), FragTrap(other) ,_Name(other._Name)
{
    std::cout << "Diamond copy constructor is called." << std::endl;
    this->_Energy = 50;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond destructor is called" << std::endl;
}


/*               Memeber Func               */

void DiamondTrap::attack(const std::string &tagret)
{
    ScravTrap::attack(tagret);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Who am I ? am I " << this->_Name 
        << " or am I " << ClapTrap::_Name << std::endl;
}

/*               operators                 */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::_Name = other.ClapTrap::_Name;
        this->_Name = other._Name;
        this->_AD = other._AD;
        this->_Energy = other._Energy;
        this->_HP = other._HP;
    }
    return *this;
}
