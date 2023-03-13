/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:35:42 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/13 22:06:30 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(const std::string& id);
    FragTrap(const FragTrap& other);

    FragTrap& operator=(const FragTrap &other);
    void attack(std::string& target);
    void highFivesGuys(void);
    ~FragTrap();
};