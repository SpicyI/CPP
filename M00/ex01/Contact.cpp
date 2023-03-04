/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:18:11 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/04 20:57:15 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::format(const std::string str) const
{
    if (str.length() > 10)
        return (str.substr(0, 9).append("."));
    return (str);
}
void Contact::display(int index) const
{
    std::cout << std::setw(10) << std::left << index << "|"
              << std::setw(10) << std::left << format(_first_name) << "|"
              << std::setw(10) << std::left << format(_last_name) << "|"
              << std::setw(10) << std::left << format(_nickname) << std::endl;
}

void Contact::display_info(void) const
{
    std::cout << "First Name : " << _first_name << std::endl;
    std::cout << "Last Name :" << _last_name << std::endl;
    std::cout << "Nickname : " << _nickname << std::endl;
    std::cout << "Phone Number :" << _phone_num << std::endl;
    std::cout << "Dark Secret :" << _dark_secret << std::endl;
}

void Contact::is_validinput(std::string prompt, std::string &dest, bool all_num)
{
    int start = 0, end = 0;
    while (1)
    {
        std::cout << prompt;
        getline(std::cin, dest);
        if (std::cin.eof())
            break;
        if (!dest.empty())
        {
            start = dest.find_first_not_of("\t \v");
            end = dest.find_last_not_of("\t \v");
            if (start >= 0 && end >= 0)
                dest = dest.substr(start, end + 1);
            else
                dest.clear();
        }
        if (!dest.empty() && dest.length())
        {
            if (!all_num)
                break;
            else if (is_anumber(dest))
                break;
            std::cout << "Insert a number and the  ";
        }
        std::cout << CONTACT_INPUT_ERR << std::endl;
        dest.clear();
    }
    return;
}
void Contact::fill(void)
{
    is_validinput("First Name : ", _first_name, DEFAULT);
    if (std::cin.eof())
        return;
    is_validinput("Last Name :", _last_name, DEFAULT);
    if (std::cin.eof())
        return;
    is_validinput("Nickname : ", _nickname, DEFAULT);
    if (std::cin.eof())
        return;
    is_validinput("Phone Number :", _phone_num, ALL_NUM);
    if (std::cin.eof())
        return;
    is_validinput("Dark Secret :", _dark_secret, DEFAULT);
    if (std::cin.eof())
        return;
    return;
}