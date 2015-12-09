/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 11:35:51 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 13:54:12 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
class Zombie {

	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void );
		std::string		getName ( void ) const;
		void			setName( std::string name );
		std::string		getType ( void ) const;
		void			setType( std::string name );

	private:
		std::string	_type;
		std::string	_name;
};


#endif
