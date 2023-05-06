/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:18:32 by del-khay          #+#    #+#             */
/*   Updated: 2023/05/03 23:55:19 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <stdio.h>

class PhoneBook
{

private:
    Contact contact[8];
    int _freeSpot;
    int _current_Contact;

public:
    PhoneBook();
    void add_contact();
    void display_contact();
};