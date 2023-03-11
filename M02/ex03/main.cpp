/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:18:07 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 02:32:51 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
int main()
{
    // Define the vertices of the triangle
    Point a(1.0f, 1.0f);
    Point b(3.0f, 1.0f);
    Point c(2.0f, 3.0f);

    // Define a point inside the triangle
    Point insidePoint(2.0f, 2.0f);

    // Define a point outside the triangle
    Point outsidePoint(4.0f, 4.0f);

    // Check if the insidePoint is inside the triangle
    bool isInside = bsp(a, b, c, insidePoint);
    std::cout << "Point (" << insidePoint.getX().toFloat() 
        << ", " << insidePoint.getY().toFloat() 
        << ") is inside the triangle: " << isInside << std::endl;

    // Check if the outsidePoint is inside the triangle
    isInside = bsp(a, b, c, outsidePoint);
    std::cout << "Point (" << outsidePoint.getX().toFloat()
         << ", " << outsidePoint.getY().toFloat() 
         << ") is inside the triangle: " << isInside << std::endl;

    // Define a point on the edge of the triangle
    Point edgePoint(4.0f, 1.0f);

    // Check if the edgePoint is inside the triangle
    isInside = bsp(a, b, c, edgePoint);
    std::cout << "Point (" << edgePoint.getX().toFloat() 
    << ", "  << edgePoint.getY().toFloat() 
    << ") is inside the triangle: " << isInside << std::endl;

    return 0;
}

