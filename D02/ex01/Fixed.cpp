/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 10:59:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:03:06 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FixedV(0)
{
	this->_FixedV = 0;
	std::cout << "Default constructor called" <<std::endl;
}


Fixed::Fixed( int const i) // converts it to the correspondant fixed(8) point value
{
	this->_FixedV = i << this->_BitsFrac;
	std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed( float const i)
{
	this->_FixedV = roundf(i * pow(2, (this->_BitsFrac)));
	std::cout << "Float constructor called" <<std::endl;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_FixedV = rhs.getRawBits();
	return *this;
}

float 		Fixed::toFloat( void ) const
{
	return ((float)this->_FixedV * pow(2, -(this->_BitsFrac)));
}

int			Fixed::toInt( void ) const
{
	return (this->_FixedV / pow(2, (this->_BitsFrac)));
}

int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_FixedV;
}

void		Fixed::setRawBits( int const raw )
{
	this->_FixedV = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
		o << i.toFloat();
		return o;
}
