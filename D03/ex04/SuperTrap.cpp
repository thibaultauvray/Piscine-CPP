/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:20:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 13:16:35 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name )
{
	this->_maxHitPoints = 100;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energy = 120;
	this->_maxEnergy= 120;
	this->_level = 1;
	this->_meleeAttack = 60;
	this->_rangedAttack = 20;
	this->_armorReduction = 5;
}

SuperTrap::SuperTrap( SuperTrap const & src)
{
	*this = src;
	return;

}

SuperTrap::~SuperTrap()
{

}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
	*this = rhs;
	return *this;
}

void		SuperTrap::rangedAttack( std::string const &target )
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack( std::string const &target )
{
	NinjaTrap::meleeAttack(target);
}
