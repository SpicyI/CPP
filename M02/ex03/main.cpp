/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:18:07 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 00:01:26 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
int main() {
    Point a(0.0f , 0.0f);
    Point b(10.0f , 30.0f);
    Point c(20.0f , 0.f);

    Fixed ar = area(a, b , c);
    std::cout << "area = "<<ar << std::endl;
}
