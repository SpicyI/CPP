/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:55:06 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 16:08:32 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const float x1, const float y1):x(x1) , y(y1) { 
    // std::cout << "Point constructor called" <<std::endl;
    // std::cout << x1 << " (x1)fixed = " << x <<std::endl;
    // std::cout << y1 << " (y1)fixed = " << y1 <<std::endl;
}

Point::Point(Point const &other) : x(other.getX()) , y(other.getY())
{  
    // std::cout << "Point copy constructor called" <<std::endl;
}

Point::~Point() {}

Fixed Point::getX(void) const
{
    return(this->x);
}

Fixed Point::getY(void) const
{
    return(this->y);
}

Point& Point::operator=(Point const &other)
{
    (void)other;
    return (*this);
}