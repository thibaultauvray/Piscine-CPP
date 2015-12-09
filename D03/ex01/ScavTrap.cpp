/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:44:06 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 21:08:03 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( std::string name) : _hitPoint( 100 ), _maxHitPoints( 100 ), _energy( 50 ), _maxEnergy( 50 ), _level( 1 ), _name ( name ), _meleeAttack( 20 ), _rangedAttack( 15 ), _armorReduction( 3 )
{
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src)
{
	*this = src;
	return;

}

ScavTrap::~ScavTrap()
{
	std::cout << "Dangit, I'm out!" << std::endl;

}

void		ScavTrap::meleeAttack( std::string const &target )
{
	std::cout << "FR4G-TP : " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttack <<  " points of damage ! " << std::endl;
}

void		ScavTrap::rangedAttack( std::string const &target )
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttack <<  " points of damage ! " << std::endl;
}

void				ScavTrap::beRepaired( unsigned int amount )
{
	int HP = this->_hitPoint + (int)amount;
	if (HP > this->_maxHitPoints )
		this->_hitPoint = this->_maxHitPoints;
	else
		this->_hitPoint += amount;
	std::cout << "FR4G-TP : " << this->_name << " repaired " << amount << " points of damage !" << std::endl;
}

void				ScavTrap::takeDamage( unsigned int amount )
{

	int HP = this->_hitPoint - (int)amount;
	if ((HP) < 0 )
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "FR4G-TP : " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void			ScavTrap::challengeNewcomer( void )
{
	std::string nameAttack[] = {"To die!", "To dance like a drunk man !", "To sing Faudel !", "To lick your knees !"};
	std::srand(time(NULL) + clock());
	std::cout << this->_name << "challenge you " <<  nameAttack[std::rand() % 4] << std::endl;
}

std::string		ScavTrap::getName( void ) const
{
	return this->_name;
}

int				ScavTrap::getmaxHitPoints( void ) const
{
	return this->_maxHitPoints;
}

int				ScavTrap::gethitPoint( void ) const
{
	return this->_hitPoint;
}

int				ScavTrap::getenergy( void ) const
	{
	return this->_energy;
}

int				ScavTrap::getmaxEnergy( void ) const
{
	return this->_maxEnergy;
}

int				ScavTrap::getlevel( void ) const
{
	return this->_level;
}

int				ScavTrap::getmeleeAttack( void ) const
{
	return this->_meleeAttack;
}

int				ScavTrap::getrangedAttack( void ) const
{
	return this->_rangedAttack;
}

int				ScavTrap::getarmorReduction( void ) const
{
	return this->_armorReduction;
}
