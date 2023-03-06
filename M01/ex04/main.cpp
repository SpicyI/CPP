/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:31:50 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/07 00:09:02 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac < 4 || ac > 4)
    {
        std::cout << "try ./losersed <filename> <string 1> <string 2> " << std::endl;
        return 1;
    }
    std::ifstream infile(av[1]);
    std::string line;
    std::string stash;
    if (!infile)
    {
        std::cout << "Bad infile !!" << std::endl;
        return(1);
    }
    while(infile)
    {
        getline(infile,line);
        // if (line.empty())
        //     break;
        stash.append(line);
        if (infile)
            stash.append("\n");
        line.clear();
    }
    std::cout << stash ;//<< std::endl;
}