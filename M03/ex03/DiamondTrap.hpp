/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:26:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 23:17:17 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScravTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(const std::string &id);
    DiamondTrap(const DiamondTrap &other);

    // DiamondTrap& operator=(const DiamondTrap &other);
    ~DiamondTrap();
}; 