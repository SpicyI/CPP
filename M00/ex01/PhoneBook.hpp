/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:18:32 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/04 20:49:15 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <stdio.h>

class PhoneBook
{

private:
    Contact contact[8];
    int Free_Spot;
    int current_contact;

public:
    void add_contact();
    void display_contact();
};