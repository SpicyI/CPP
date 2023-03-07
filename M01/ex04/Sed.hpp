/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:39:33 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:29:27 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>

class Sed
{
private:
    std::string line;
    std::ifstream infile;
    std::ofstream outfile;
    void replacer(const std::string &s1, const std::string &s2);

public:
    bool is_bad();
    void reader(std::string s1, std::string s2);
    Sed(std::string file);
    Sed();
    ~Sed();
};