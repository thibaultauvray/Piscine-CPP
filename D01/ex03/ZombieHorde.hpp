/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombiehorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:36:59 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 18:36:45 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
class ZombieHorde
{
	public:
		ZombieHorde( int N );
		~ZombieHorde( void );
		void	announce( Zombie *Zomb);
		void	randomChump( Zombie *Zomb );
		Zombie	*tab;

	private:
		std::string		genName( void ) const;

};
#endif
