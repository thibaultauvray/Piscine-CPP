/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:43:18 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 15:58:28 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer( std::string name, std::string title );
		Sorcerer( Sorcerer const & src);
		~Sorcerer( void );

		std::string		getName() const;
		std::string		getTitle() const;
		void			introduce( void ) const;
		void			polymorph(Victim const &src) const;
		Sorcerer& operator=(Sorcerer const & rhs);

	private:
		Sorcerer( void );
		std::string		_name;
		std::string		_title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);
#endif
