/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:37:59 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 21:19:40 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon
{

private:
    std::string type;

public:
    Weapon(std::string new_type);
    ~Weapon();
    const std::string &getType() const;
    void setType(std::string new_type);
};