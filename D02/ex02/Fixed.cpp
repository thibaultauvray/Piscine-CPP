/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 10:59:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 13:47:16 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _FixedV(0)
{
	this->_FixedV = 0;
}


Fixed::Fixed( int const i) // converts it to the correspondant fixed(8) point value
{
	this->_FixedV = i << this->_BitsFrac;
}

Fixed::Fixed( float const i)
{
	this->_FixedV = roundf(i * pow(2, (this->_BitsFrac)));
}

Fixed::Fixed( Fixed const & src)
{
	*this = src;
	return;
}

Fixed::~Fixed()
{
}

Fixed  Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed  Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


Fixed  Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed  Fixed::operator-(Fixed const & rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

/*
Fixed	&Fixed::operator++( void )
{
	
}
*/
Fixed  Fixed::operator++( int l) // a++
{
	(void)l;
	Fixed temp = *this;
	++(*this);
	return temp;
}

Fixed  Fixed::operator--( int l) // a--
{
	(void)l;
	Fixed temp = *this;
	--(*this);
	return temp;
}

Fixed &Fixed::operator++( void ) //  ++a
{
	this->_FixedV++;
	return *this;
}

Fixed &Fixed::operator--( void ) //  ++a
{
	this->_FixedV--;
	return *this;
}


bool	 Fixed::operator<(Fixed const & rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	 Fixed::operator>(Fixed const & rhs)
{
	return (this->toFloat() > rhs.toFloat());
}


bool	 Fixed::operator==(Fixed const & rhs)
{
	return (this->toFloat() == rhs.toFloat());
}


bool	 Fixed::operator!=(Fixed const & rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

bool	 Fixed::operator<=(Fixed const & rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	 Fixed::operator>=(Fixed const & rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
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

	return this->_FixedV;
}

void		Fixed::setRawBits( int const raw )
{
	this->_FixedV = raw;
}

/*
 *	NON MEMBER FUNCTION
 */

const Fixed			&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}

Fixed				&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

const Fixed			&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed				&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
		o << i.toFloat();
		return o;
}
