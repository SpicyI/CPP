/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:52:39 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 19:19:49 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
        _name = name;
}
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": has been slain" << std ::endl;
}

void Zombie::annonce (void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
