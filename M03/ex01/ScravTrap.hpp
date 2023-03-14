/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:48:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/14 17:14:38 by del-khay         ###   ########.fr       */
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
    void attack(const std::string& target);
    void guardGate();
    ~ScravTrap();
};
