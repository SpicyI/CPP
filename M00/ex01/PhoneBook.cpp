/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:46:25 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/05 15:16:29 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _freeSpot = 0;
    _current_Contact = 0;
}

void PhoneBook::add_contact()
{
    Contact new_contact;
    if (_freeSpot == 8)
        _freeSpot = 0;
    new_contact.fill();
    contact[_freeSpot] = new_contact;
    _freeSpot++;
    if (_current_Contact < 8)
        _current_Contact++;
    return;
}
void PhoneBook::display_contact()
{
    int index = -1;
    std::string user_input;
    while (++index < _current_Contact)
        contact[index].display(index + 1);
    if (index == 0)
    {
        std::cout << "Contact list is empty" << std::endl;
        return;
    }
    std::cout << "FIND : ";
    getline(std::cin, user_input);
    if (!user_input.empty() && is_anumber(user_input))
    {
        try
        {
            index = std::stoi(user_input);
        }
        catch (std::out_of_range)
        {
            index = 0;
        }
        if (index > 0 && index < _current_Contact + 1)
        {
            contact[index - 1].display_info();
            return;
        }
    }
    std::cout << "No  available contact for the giving index" << std::endl;
    return;
}