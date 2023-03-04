/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:42:50 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/04 20:57:53 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#define ADD "ADD"
#define EXIT "EXIT"
#define SEARCH "SEARCH"
#define INPUT_ERR "Try  ADD, SEARCH or EXIT"
#define CONTACT_INPUT_ERR "Input can not be blank, Try agian !"
#define ALL_NUM true
#define DEFAULT false

bool is_anumber(std::string str);

class Contact
{

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_num;
    std::string _dark_secret;

    std::string format(const std::string str) const;
    void is_validinput(std::string prompt, std::string &dest, bool all_num);

public:
    void display_info(void) const;
    void display(int index) const;
    void fill(void);
};