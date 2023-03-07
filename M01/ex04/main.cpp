/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:31:50 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:28:57 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    if (ac < 4 || ac > 4)
    {
        std::cout << "try ./losersed <filename> <string 1> <string 2> " << std::endl;
        return 1;
    }
    Sed obj(av[1]);
    if (obj.is_bad())
        return (1);
    obj.reader(av[2], av[3]);
}