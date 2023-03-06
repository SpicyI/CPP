/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:20:31 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 17:12:49 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 8;
    Zombie *ptr = zombieHorde(N , "Finn");
    int i = 0;
    while (i < N)
    {
        ptr[i].annonce();
        i++;
    }
    if (N <= 0 || !ptr)
        return 1;
    delete [] ptr;
    system("leaks HORDE");
}