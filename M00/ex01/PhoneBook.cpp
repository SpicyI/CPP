/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:46:25 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/04 21:07:46 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact()
{
    Contact new_contact;
    if (Free_Spot == 8)
        Free_Spot = 0;
    new_contact.fill();
    contact[Free_Spot] = new_contact;
    Free_Spot++;
    if (current_contact < 8)
        current_contact++;
    return;
}
void PhoneBook::display_contact()
{
    int index = -1;
    std::string user_input;
    while (++index < current_contact)
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
        if (index > 0 && index < current_contact + 1)
        {
            contact[index - 1].display_info();
            return;
        }
    }
    std::cout << "No  available contact for the giving index" << std::endl;
    return;
}