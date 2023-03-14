/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:26:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 17:36:02 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScravTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap
{
private:
    std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(const std::string &id);
    DiamondTrap(const DiamondTrap &other);
    
    void attack(const std::string &tagret);
    void whoAmI();

    DiamondTrap& operator=(const DiamondTrap &other);
    ~DiamondTrap();
}; 