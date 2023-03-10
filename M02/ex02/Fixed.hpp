/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:48:28 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/10 17:29:33 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
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
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed& operator-();
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    float toFloat(void) const;
    int toInt(void) const;
    
    static const Fixed& min(Fixed& fixedPoint1 , Fixed& fixedPoint2);
    static const Fixed& min(const Fixed& fixedPoint1 , const Fixed& fixedPoint2);
    static const Fixed& max(Fixed& fixedPoint1 , Fixed& fixedPoint2);
    static const Fixed& max(const Fixed& fixedPoint1 , const Fixed& fixedPoint2);
    
    ~Fixed();
};

std::ostream& operator<<(std::ostream& stream ,const Fixed& fixedPoint);