/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:46:58 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:26:03 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( ) : AWeapon("Plasma Rifle", 5, 21)
{
	this->_name = "Plasma Rifle";
	this->_nbDmg = 21;
	this->_APCost = 5;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src) : AWeapon(src.getName(), src.getDamage(), src.getAPCost())
{

	this->_name = src.getName();
	this->_nbDmg = src.getDamage();
	this->_APCost = src.getAPCost();
}

PlasmaRifle::~PlasmaRifle()
{

}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src)
{
	this->_name = src.getName();
	this->_nbDmg = src.getDamage();
	this->_APCost = src.getAPCost();
	return *this;
}

