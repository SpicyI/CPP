/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:12:22 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/12 17:20:02 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
private:
    std::string _Name;
    unsigned int _HP , _Energy , _AD;
public:
    ClapTrap(void);
    ClapTrap(std::string id);
    ClapTrap(const ClapTrap &other);

    ClapTrap &operator=(const ClapTrap &other);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
