/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:40:18 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 17:11:06 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( std::string const &name, int apcost, int damage ) : _name(name), _nbDmg(damage), _APCost(apcost)
{

}

AWeapon::AWeapon( AWeapon const & src)
{
	this->_name = src.getName();
	this->_nbDmg = src.getDamage();
	this->_APCost = src.getAPCost();
	return;

}

AWeapon::~AWeapon()
{

}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
	this->_name = src.getName();
	this->_nbDmg = src.getDamage();
	this->_name = src.getAPCost();
	return *this;
}

std::string		AWeapon::getName() const
{
	return this->_name;
}

int				AWeapon::getDamage() const
{
	return this->_nbDmg;
}

int				AWeapon::getAPCost() const
{
	return this->_APCost;
}
