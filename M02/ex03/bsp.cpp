/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:15:05 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 01:00:26 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const p1, Point const p2, Point p3)
{
    Fixed _area = (p1.getX() * (p2.getY() - p3.getY()));
    _area = _area + (p3.getX() * (p1.getY() - p2.getY()));
    _area = _area + (p2.getX() * (p3.getY() - p1.getY()));
    
    _area = _area * Fixed(0.5f);
    Fixed zero(0);
    if (_area < zero)
        _area = _area * Fixed(-1);
    return (_area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area0 = area(a , b, c);
    Fixed area1 = area(a, b , point);
    Fixed area2 = area(a, c , point);
    Fixed area3 = area(b, c , point);

    if (area0 == (area1 + area2 + area3))
        return true;
    else
        return false;
}