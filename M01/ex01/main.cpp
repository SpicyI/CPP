/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:20:31 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 00:44:01 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("joe");
    Zombie *ptr = newZombie("Peter");
    ptr->annonce();
    delete ptr;
    system("leaks Brainz");
}