/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 10:59:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 13:53:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FixedV(0)
{
	this->_FixedV = 0;
	std::cout << "Default constructor called" <<std::endl;
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
		o << i.getRawBits();
		return o;
}
