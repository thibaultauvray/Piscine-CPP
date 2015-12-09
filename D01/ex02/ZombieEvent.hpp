/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 11:56:08 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 15:39:54 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent( void );
		~ZombieEvent( void );
		void			setZombieType (std::string type);
		Zombie			*newZombie(std::string name);
		Zombie			*randomChump( void );
		std::string		getType( void ) const;

	private:
		std::string		_type;
		std::string		genName() const;
};

#endif
