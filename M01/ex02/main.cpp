/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:16:02 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/06 17:29:02 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
    std::string Brain = "HI THIS IS BARIN";
    std::string *stringPTR = &Brain;
    std::string& stringREF = Brain;
    
    std::cout << std::setw(30) << std::left << "Address of the string" << ": " << &Brain << std::endl;
    std::cout << std::setw(30) << std::left << "Address held by  stringPTR" << ": " << stringPTR << std::endl;
    std::cout << std::setw(30) << std::left << "Address held by stringREF" << ": " << &stringREF << std::endl;

    std::cout << std::setw(30) << std::left << "\n-----------------------------------------------\n"<< std::endl;

    std::cout << std::setw(30) << std::left << "Value of the string" << ": " << Brain << std::endl;
    std::cout << std::setw(30) << std::left << "Value pointed to by stringPTR" << ": " << *stringPTR << std::endl;
    std::cout << std::setw(30) << std::left << "Value ponted to by stringREF" << ": " << stringREF << std::endl;
}