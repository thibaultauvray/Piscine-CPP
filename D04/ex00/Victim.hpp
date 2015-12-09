/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:20:19 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 16:14:16 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	public:
		Victim( std::string name );
		Victim(  Victim const & rhs);
		Victim( void );
		~Victim( void );
		void		introduce( void ) const;
		virtual void		getPolymorphed() const;
		std::string		getName() const;
		Victim& operator=(Victim const & rhs);

	protected:
		std::string _name;
		/* data */
};

std::ostream	&operator<<(std::ostream &o, Victim const &i);
#endif
