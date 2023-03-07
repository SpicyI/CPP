/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:20:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 18:44:23 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "you ae now in the Debug Level" << std::endl;
}

void Harl::info(void)
{
    std::cout << "you ae now in the Info Level" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "you ae now in the Warning Level" << std::endl;
}

void Harl::error(void)
{
    std::cout << "you ae now in the Error Level" << std::endl;
}

void  Harl::complain(std::string level)
{
    void (Harl::*ptr[4])(void) = {&Harl::debug , &Harl::info ,&Harl::warning , &Harl::error};
    std::string Lvls[4] = {"debug", "info","warning","error"};
    int i = 0;
    while(i < 4)
    {
        if(level == Lvls[i])
        {
            (this->*ptr[i])();
            break;
        }
        i++;
    }
}