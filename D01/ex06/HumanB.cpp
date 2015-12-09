/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 11:58:59 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:27:50 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
}

HumanB::~HumanB( void )
{

}

void	HumanB::setWeapon( Weapon &club)
{
	this->_weapon = &club;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
