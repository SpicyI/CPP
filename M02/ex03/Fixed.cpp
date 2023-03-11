/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:17:30 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/11 00:45:03 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// * Constructors

Fixed::Fixed(void) : _fixed_p(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{

    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int number)
{
    this->_fixed_p = number * (1 << this->_scaling_factor);  
}

Fixed::Fixed(const float number)
{
    // std::cout << "float constructor called" << std::endl;
    this->_fixed_p = static_cast<int> (std::roundf(number * (1 << this->_scaling_factor)));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

// * Opereators

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixed_p = other.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
    return(this->_fixed_p > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
    return(this->_fixed_p < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return(this->_fixed_p >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return(this->_fixed_p <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
    return(this->_fixed_p == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return(this->_fixed_p != other.getRawBits());
}

Fixed& Fixed::operator++(void)
{
    this->_fixed_p++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_fixed_p++;
    return temp;
}

Fixed& Fixed::operator--(void)
{
    this->_fixed_p--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_fixed_p--;
    return(temp);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed resault;
    resault._fixed_p = this->_fixed_p + other.getRawBits();
    return (resault);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed resault(this->toFloat() - other.toFloat());
    return (resault);
}

Fixed& Fixed::operator-()
{
    this->_fixed_p *= -1;
    return (*this);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed resault( this->toFloat() * other.toFloat());
    return (resault);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed resault (this->toFloat() / other.toFloat());
    return (resault);
}

// * Setters/Gettere

int Fixed::getRawBits(void) const
{
    return (this->_fixed_p);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_p = raw;
}

// * Memeber Func
float Fixed::toFloat(void) const
{
    float converted = static_cast<float> (this->_fixed_p / (static_cast<float>(1 << this->_scaling_factor)));
    return(converted);
}

int Fixed::toInt(void) const
{
    int converted = static_cast<int>(this->_fixed_p >> this->_scaling_factor);
    return(converted);
}

// * static Member Func

const Fixed& Fixed::min(Fixed& fixedPoint1 , Fixed& fixedPoint2)
{
    if (fixedPoint1 <= fixedPoint2)
        return fixedPoint1;
    else
        return fixedPoint2;
}

const Fixed& Fixed::max(Fixed& fixedPoint1 , Fixed& fixedPoint2)
{
    if (fixedPoint1 >= fixedPoint2)
        return fixedPoint1;
    else
        return fixedPoint2;
}

const Fixed& Fixed::min(const Fixed&  fixedPoint1 ,const Fixed&  fixedPoint2)
{
    if (fixedPoint1 <= fixedPoint2)
        return fixedPoint1;
    else
        return fixedPoint2;
}

const Fixed& Fixed::max( const Fixed&  fixedPoint1 , const Fixed& fixedPoint2)
{
    if (fixedPoint1 >= fixedPoint2)
        return fixedPoint1;
    else
        return fixedPoint2;
}


// * Func
std::ostream& operator<<(std::ostream& stream ,const Fixed& fixedPoint)
{
    stream << fixedPoint.toFloat();
    return stream;
}