/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:42:58 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 20:26:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( FragTrap const & src  );
		~FragTrap( void );

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		std::string		getName( void ) const;
		void			vaulthunter_dot_exe(std::string const & target);

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

		/*
		rangedAttack(std::string const & target)
		meleeAttack(std::string const & target)
		takeDamage(unsigned int amount)
		beRepaired(unsigned int amount)
		*/
};

#endif
