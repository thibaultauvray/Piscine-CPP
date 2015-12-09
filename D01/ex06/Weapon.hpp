/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 11:50:56 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:27:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string		getType( void ) const;
		void			setType( std::string type ) ;

	private:
		std::string	_type;
};

#endif
