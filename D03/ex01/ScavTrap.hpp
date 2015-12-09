/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:44:24 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 21:04:01 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src  );
		~ScavTrap( void );

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		std::string		getName( void ) const;

		void			challengeNewcomer( void );
		int				gethitPoint( void ) const;

		int				getmaxHitPoints( void ) const;

		int				getenergy( void ) const;

		int				getmaxEnergy( void ) const;

		int				getlevel( void ) const;

		int				getmeleeAttack( void ) const;

		int				getrangedAttack( void ) const;

		int				getarmorReduction( void ) const;

	private:
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
