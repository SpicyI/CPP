/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:48:28 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/09 23:45:41 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
    int _fixed_p;
    static const int _scaling_factor = 8;

public:
    Fixed(void);
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
};

std::ostream& operator<<(std::ostream& stream ,const Fixed& fixedPoint);