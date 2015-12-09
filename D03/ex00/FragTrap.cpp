/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:42:26 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 21:12:14 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : _hitPoint( 100 ), _maxHitPoints( 100 ), _energy( 100 ), _maxEnergy( 100 ), _level( 1 ), _name ( name ), _meleeAttack( 30 ), _rangedAttack( 20 ), _armorReduction( 5 )
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src)
{
	*this = src;
	return;
	std::cout << "Recompiling my combat code" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD" << std::endl;

}

void		FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "FR4G-TP : " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttack <<  " points of damage ! " << std::endl;
}

void		FragTrap::rangedAttack( std::string const &target )
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttack <<  " points of damage ! " << std::endl;
}

void				FragTrap::beRepaired( unsigned int amount )
{
	int HP = this->_hitPoint +(int)amount;
	if (HP > this->_maxHitPoints )
		this->_hitPoint = this->_maxHitPoints;
	else
		this->_hitPoint += amount;
	std::cout << "FR4G-TP : " << this->_name << " repaired " << amount << " points of damage !" << std::endl;
}

void				FragTrap::takeDamage( unsigned int amount )
{

	int HP = this->_hitPoint - (int)amount;
	if ((HP) < 0 )
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "FR4G-TP : " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string nameAttack[] = {"I am a tornado of death and bullets!", "Wow, did I really do that?", "Ooooh! Terrabits!", "Meatsplosion"};
	std::srand(time(NULL) + clock());
	if (this->_energy >= 25)
	{
		int		damage = std::rand() % 25;
		std::cout << "FR4G-TP : " << this->_name << " use " << nameAttack[std::rand() % 4] << ", "<< target << "  lost " << damage << " HP."  << std::endl;
		this->_energy -= 25;
	}
	else
	{
		std::cout << "Not enough energy" << std::endl;
	}


}

std::string		FragTrap::getName( void ) const
{
	return this->_name;
}

int				FragTrap::getmaxHitPoints( void ) const
{
	return this->_maxHitPoints;
}

int				FragTrap::gethitPoint( void ) const
{
	return this->_hitPoint;
}

int				FragTrap::getenergy( void ) const
	{
	return this->_energy;
}

int				FragTrap::getmaxEnergy( void ) const
{
	return this->_maxEnergy;
}

int				FragTrap::getlevel( void ) const
{
	return this->_level;
}

int				FragTrap::getmeleeAttack( void ) const
{
	return this->_meleeAttack;
}

int				FragTrap::getrangedAttack( void ) const
{
	return this->_rangedAttack;
}

int				FragTrap::getarmorReduction( void ) const
{
	return this->_armorReduction;
}


