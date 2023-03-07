/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:40:34 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 20:29:06 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file)
{
    infile.open(file);
    if (infile)
        outfile.open(file.append(".replace"));
}
Sed::Sed()
{
    infile.clear();
}

Sed::~Sed()
{
    line.clear();
}

void Sed::reader(std::string s1, std::string s2)
{
    while (infile)
    {
        getline(infile, line);
        replacer(s1, s2);
        if (!infile.eof())
            line.append("\n");
        outfile << line;
        line.clear();
    }
}

bool Sed::is_bad()
{
    if (!this->infile)
    {
        std::cout << "Bad infile !!" << std::endl;
        return true;
    }
    return false;
}

void Sed::replacer(const std::string &s1, const std::string &s2)
{
    std::string rslt;
    size_t start = 0, s1len = s1.length(), pos, i = 1;
    if (!s1.length() || s1.empty())
        return;
    while ((pos = line.find(s1, start)) != std::string::npos)
    {
        rslt += line.substr(start, pos - start);
        start += pos - start + s1len;
        rslt += s2;
        i++;
    }
    rslt += line.substr(start);
    line = rslt;
}