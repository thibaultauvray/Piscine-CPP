/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:03:15 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 13:49:47 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed& operator=(Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int		_FixedV;
		static const int _BitsFrac = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
