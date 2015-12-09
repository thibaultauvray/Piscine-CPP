/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:03:15 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 13:46:29 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const i );
		Fixed( float const i);
		~Fixed( void );

		Fixed& operator=(Fixed const & rhs);
		bool   operator<(Fixed const & rhs);
		bool   operator>(Fixed const & rhs);
		bool   operator<=(Fixed const & rhs);
		bool   operator>=(Fixed const & rhs);
		bool   operator==(Fixed const & rhs);
		bool   operator!=(Fixed const & rhs);

		Fixed &operator++( void );
		Fixed &operator--( void );
		Fixed operator++( int l);
		Fixed operator--( int l);
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
		float	toFloat( void ) const;
		int		getRawBits( void ) const;
		int		toInt( void ) const;
		void	setRawBits( int const raw );
		static const Fixed			&max(Fixed const &a, Fixed const &b);
		static Fixed				&max(Fixed &a, Fixed &b);
		static const Fixed			&min(Fixed const &a, Fixed const &b);
		static Fixed				&min(Fixed &a, Fixed &b);

	private:
		int		_FixedV;
		static const int _BitsFrac = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
