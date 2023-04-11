/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:48:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 17:35:42 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(const std::string& id);
    ScavTrap(const ScavTrap& other);

    ScavTrap& operator=(const ScavTrap &other);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};
