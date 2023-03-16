/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:26:41 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 18:04:30 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor is called." << std::endl;
}


Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor is called." << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this == &other)
        return *this;
    for(int i = 0 ; i < 100 ; i++)
       this->idea[i] = other.idea[i]; 
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor is called." << std::endl;
}