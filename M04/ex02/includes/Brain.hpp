/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:47:02 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 00:27:07 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "iostream"

class Brain
{
public:
    std::string idea[100];

    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    
    ~Brain();
};
