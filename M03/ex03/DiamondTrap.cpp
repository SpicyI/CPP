/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:59:03 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 23:17:45 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScravTrap() , FragTrap()
{
     std::cout << "Diamond default contructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &id):
ClapTrap(id + "_clap_name")
{
    std::cout << "| CLAP " << ClapTrap::_Name << std::endl
       <<"| THIS " << this->_Name << std::endl
       << "| FRAG Energy " << FragTrap::_Energy << " THIS: " << this->_Energy<< std::endl
       << "| Scrav Energy " << ScravTrap::_Energy << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond destructor is called" << std::endl;
}