/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 22:31:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 11:02:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap( std::string name  );
		NinjaTrap( NinjaTrap const &src );
		~NinjaTrap( void );

		void		ninjaShoebox( FragTrap const &i );
		void		ninjaShoebox( ScavTrap const &i );
		void		ninjaShoebox( NinjaTrap const &i );
};

#endif
