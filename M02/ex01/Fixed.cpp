/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:17:30 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 15:58:38 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_p(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{

    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixed_p = other.getRawBits();
    return *this;
}
int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_p);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_p = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
float Fixed::toFloat(void) const
{
    float converted = static_cast<float> (_fixed_p / (static_cast<float>(1 << _scaling_factor)));
    return(converted);
}

int Fixed::toInt(void) const
{
    int converted = static_cast<int>(_fixed_p >> _scaling_factor);
    return(converted);
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed_p = number << _scaling_factor;
}

Fixed::Fixed(const float number)
{
    std::cout << "float constructor called" << std::endl;
    _fixed_p = static_cast<int> (std::roundf(number * (1 << _scaling_factor)));
}

std::ostream& operator<<(std::ostream& stream ,const Fixed& fixedPoint)
{
    stream << fixedPoint.toFloat();
    return stream;
}
