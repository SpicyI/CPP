/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:48:58 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/12 23:44:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
public:
    ScravTrap(void);
    ScravTrap(std::string& id);
    ScravTrap(ScravTrap& other);

    void operator=(const ScravTrap &other);
    void attack(std::string& target);
    void guardGate();
    ~ScravTrap();
};
