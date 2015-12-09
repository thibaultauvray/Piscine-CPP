/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:52:36 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:23:15 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( ) : AWeapon("Power Fist", 8, 50)
{
	this->_name = "Power Fist";
	this->_nbDmg = 50;
	this->_APCost = 8;
}

PowerFist::PowerFist( PowerFist const & src) : AWeapon(src.getName(), src.getDamage(), src.getAPCost())
{
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{

}

PowerFist & PowerFist::operator=(PowerFist const & src)
{
	this->_name = src.getName();
	this->_nbDmg = src.getDamage();
	this->_APCost = src.getAPCost();
	return *this;
}

