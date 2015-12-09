/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:44:06 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 22:08:53 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src.getName(), src.gethitPoint(), src.getmaxHitPoints(), src.getenergy(), src.getmaxEnergy(), src.getlevel(), src.getmeleeAttack(), src.getrangedAttack(), src.getarmorReduction())
{
	*this = src;
	return;

}

ScavTrap::~ScavTrap()
{
	std::cout << "Dangit, I'm out!" << std::endl;

}

void			ScavTrap::challengeNewcomer( void )
{
	std::string nameAttack[] = {"To die!", "To dance like a drunk man !", "To sing Faudel !", "To lick your knees !"};
	std::srand(time(NULL) + clock());
	std::cout << this->_name << "challenge you " <<  nameAttack[std::rand() % 4] << std::endl;
}


