/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:18:07 by del-khay          #+#    #+#             */
/*   Updated: 2023/03/10 17:29:55 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#include <iostream>
#include "Fixed.hpp"

int main() {
    
    
    Fixed r;
    Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << r << std::endl;
    std::cout << ++r << std::endl;
    std::cout << r << std::endl;
    std::cout << r++ << std::endl;
    std::cout << r << std::endl;
    std::cout << f << std::endl;
    std::cout << Fixed::max( r, f ) << std::endl;
    
    
    // Create two Fixed objects using different constructors
    Fixed a(2); // a = 2
    Fixed b(3.5f); // b = 3.5
    
    // Add the two Fixed objects and store the result in a third one
    Fixed c = a + b; // c = 5.5
    std::cout << "a = " << a << std::endl; // a = 2
    std::cout << "b = " << b << std::endl; // b = 3.5
    std::cout << "c = a + b = " << c << std::endl; // c = 5.5
    
    // Multiply the two Fixed objects and store the result in a third one
    Fixed d = a * b; // d = 7
    std::cout << "d = a * b = " << d << std::endl; // d = 7
    
    // Divide the two Fixed objects and store the result in a third one
    Fixed e = a / b; // e = 0.571429
    std::cout << "e = a / b = " << e << std::endl; // e = 0.571429
    
    //Negate the value of a Fixed object and store the result in a new one
    Fixed v = -c; // f = -5.5
    std::cout << "v = -c = " << v << std::endl; // f = -5.5
    
    // Compare two Fixed objects using the greater than operator
    bool i = a > b; // i = true
    std::cout << "a > b = " << i << std::endl; // a > b = true
    
    // Compare two Fixed objects using the less than or equal to operator
    bool j = a <= b; // j = false
    std::cout << "a <= b = " << j << std::endl; // a <= b = false
    
    // Find the minimum of two Fixed objects using a static member function
    const Fixed k(2.5f); // k = 2.5
    const Fixed l(3.75f); // l = 3.75
    const Fixed& m = Fixed::min(k, l); // m = 2.5
    std::cout << "m = min(k, l) = " << m << std::endl; // m = min(k, l) = 2.5
    
    // Find the maximum of two Fixed objects using a static member function
    const Fixed& n = Fixed::max(k, l); // m = 3.75
    std::cout << "n = max(k, l) = " << n << std::endl; // m = min(k, l) = 3.75
}
