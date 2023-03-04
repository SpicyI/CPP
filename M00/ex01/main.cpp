/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:46:18 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/04 20:55:19 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool is_anumber(std::string str)
{
    int i = 0;
    if (str[i] == '+' && str.length() != 1)
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

int main(void)
{
    std::string user_input;
    PhoneBook PhoneBook;
    while (1)
    {
        std::cout << "PhoneBook: ";
        getline(std::cin, user_input);
        if (std::cin.eof())
            break;
        if (!user_input.empty()){
            if (user_input == EXIT)
                break;
            else if (user_input == ADD)
                PhoneBook.add_contact();
            else if (user_input == SEARCH)
                PhoneBook.display_contact();
            else 
                std::cout << INPUT_ERR << std::endl;
        }
        user_input.clear();
    }
}
