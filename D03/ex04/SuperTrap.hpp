/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:20:14 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 13:43:29 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"



class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap( std::string name );
		SuperTrap( SuperTrap const &src );
		virtual ~SuperTrap( void );
		SuperTrap& operator=(SuperTrap const & rhs);
void	meleeAttack( std::string const &target );
void	rangedAttack( std::string const &target );

	private:
		/* data */
};

#endif
