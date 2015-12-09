/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 22:20:24 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 12:53:08 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "OMG ! YOU CAN'T SEE ME ! I'm blending in just like a pine tree, cuz I'a Ninja " << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src) : ClapTrap( src.getName(), src.gethitPoint(), src.getmaxHitPoints(), src.getenergy(), src.getmaxEnergy(), src.getlevel(), src.getmeleeAttack(), src.getrangedAttack(), src.getarmorReduction())
{
	*this = src;
	return;
}

NinjaTrap::NinjaTrap( void )
{
	this->_maxHitPoints = 60;
	this->_hitPoint = 60;
	this->_energy = 120;
	this->_maxEnergy= 120;
	this->_level = 1;
	this->_meleeAttack = 60;
	this->_rangedAttack = 5;
	this->_armorReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "A ninja can't die, he disappears" << std::endl;

}

void		NinjaTrap::ninjaShoebox( FragTrap const &i )
{
	std::cout << "The ninja frag this FragTrap : " << i.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox( ScavTrap const &i )
{
	std::cout << "The ninja frag this ScavTrap : " << i.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox( NinjaTrap const &i )
{
	std::cout << "The ninja can't do anything to another ninjafrag :" << i.getName() << std::endl;
}
