/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:42:58 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 21:46:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( FragTrap const & src  );
		~FragTrap( void );

		void			vaulthunter_dot_exe(std::string const & target);


		/*
		rangedAttack(std::string const & target)
		meleeAttack(std::string const & target)
		takeDamage(unsigned int amount)
		beRepaired(unsigned int amount)
		*/
};

#endif
