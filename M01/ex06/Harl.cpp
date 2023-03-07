/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:20:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:27:56 by del-khay         ###   ########.fr       */
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
    std::cout << "[ debug ]" << std::endl;
    std::cout << "you are now in the Debug Level" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ info ]" << std::endl;
    std::cout << "you are now in the Info Level" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ warning ]" << std::endl;
    std::cout << "you are now in the Warning Level" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ error ]" << std::endl;
    std::cout << "you are now in the Error Level" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string Lvls[4] = {"debug", "info", "warning", "error"};
    int i = -1;
    while (++i < 4)
        if (level == Lvls[i])
            break;
    switch (i)
    {
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
        break;
    default:
        std::cout << "[ hell ] \nYou've reached level Hell" << std::endl;
        break;
    }
}