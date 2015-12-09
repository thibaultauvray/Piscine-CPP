/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:00:16 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 16:14:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon( std::string name );
		Peon( Peon const &rhs );
		~Peon( void );
		virtual void	getPolymorphed() const;
		Peon& operator=(Peon const & rhs);

	private:
		Peon( void );
};

#endif
