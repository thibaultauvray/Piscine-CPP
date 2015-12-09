/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 21:16:44 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 12:51:19 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name, int hitPoint, int maxHitPoints, int energy, int maxEnergy, int level, int meleeAttack, int rangedAttack, int armorReduction) : _hitPoint( hitPoint ), _maxHitPoints( maxHitPoints ), _energy( energy ), _maxEnergy( maxEnergy ), _level( level ), _name ( name ), _meleeAttack( meleeAttack ), _rangedAttack( rangedAttack ), _armorReduction( armorReduction )
{
	std::cout << "I'm the ClapTrap OF ALL CREATION" << std::endl;

}

ClapTrap::ClapTrap( void )
{
	std::cout << "I'm the ClapTrap OF ALL CREATION" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
	*this = src;
	return;

}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap OF ALL CREATION is dying" << std::endl;
}

void		ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << "FR4G-TP : " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttack <<  " points of damage ! " << std::endl;
}

void		ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttack <<  " points of damage ! " << std::endl;
}

void				ClapTrap::beRepaired( unsigned int amount )
{
	int HP = this->_hitPoint + (int)amount;
	if (HP > this->_maxHitPoints )
		this->_hitPoint = this->_maxHitPoints;
	else
		this->_hitPoint += amount;
	std::cout << "FR4G-TP : " << this->_name << " repaired " << amount << " points of damage !" << std::endl;
}

void				ClapTrap::takeDamage( unsigned int amount )
{

	int HP = this->_hitPoint - (int)amount;
	if ((HP) < 0 )
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "FR4G-TP : " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

std::string		ClapTrap::getName( void ) const
{
	return this->_name;
}

int				ClapTrap::getmaxHitPoints( void ) const
{
	return this->_maxHitPoints;
}

int				ClapTrap::gethitPoint( void ) const
{
	return this->_hitPoint;
}

int				ClapTrap::getenergy( void ) const
	{
	return this->_energy;
}

int				ClapTrap::getmaxEnergy( void ) const
{
	return this->_maxEnergy;
}

int				ClapTrap::getlevel( void ) const
{
	return this->_level;
}

int				ClapTrap::getmeleeAttack( void ) const
{
	return this->_meleeAttack;
}

int				ClapTrap::getrangedAttack( void ) const
{
	return this->_rangedAttack;
}

int				ClapTrap::getarmorReduction( void ) const
{
	return this->_armorReduction;
}
