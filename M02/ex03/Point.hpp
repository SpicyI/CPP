/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:43:41 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/10 23:55:02 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    const Fixed  x;
    const Fixed  y;
public:
    Point(void);
    Point(Point const &other);
    Point(const float x1, const float y1);

    Fixed getX(void) const;
    Fixed getY(void) const;
    
    Point& operator=(Point const &other);
    ~Point();
};


Fixed area(Point const p1, Point const p2, Point p3);