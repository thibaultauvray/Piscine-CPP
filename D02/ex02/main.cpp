/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:43:42 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 13:53:49 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " <<  a << std::endl;
	std::cout << "a++ : " << a++<< std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "A * B : " << a << " * " << b << " = " << a * b << std::endl;
	std::cout << "Max entre " << a << " et " << b << " = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min entre " << a << " et " << b << " = " << Fixed::min( a, b ) << std::endl;
	return 0;
}
