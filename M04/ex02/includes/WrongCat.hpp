/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:08:24 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/16 18:07:21 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    
    WrongCat& operator=(const WrongCat& other);
    void makeSound() const;
    
    ~WrongCat();
};