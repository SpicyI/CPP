/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:48:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 21:06:04 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
public:
    ScravTrap(void);
    ScravTrap(const std::string& id);
    ScravTrap(const ScravTrap& other);

    ScravTrap& operator=(const ScravTrap &other);
    void attack(std::string& target);
    void guardGate();
    ~ScravTrap();
};
