/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 21:17:06 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 12:04:04 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name, int hitPoint, int maxHitPoints, int energy, int maxEnergy, int level, int meleeAttack, int rangedAttack, int armorReduction);
		ClapTrap( void );
		ClapTrap( ClapTrap const &src );
		~ClapTrap( void );
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		int				gethitPoint( void ) const;
		std::string		getName( void ) const;

		int				getmaxHitPoints( void ) const;

		int				getenergy( void ) const;

		int				getmaxEnergy( void ) const;

		int				getlevel( void ) const;

		int				getmeleeAttack( void ) const;

		int				getrangedAttack( void ) const;

		int				getarmorReduction( void ) const;


	protected:
		int				_hitPoint;
		int				_maxHitPoints;
		int				_energy;
		int				_maxEnergy;
		int				_level;
		std::string		_name;
		int				_meleeAttack;
		int				_rangedAttack;
		int				_armorReduction;


};

#endif
