/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:54:58 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 12:09:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const &name ) : _name(name), _weap(NULL), _AP(40)
{
	
}

Character::Character( Character const & src)
{
	this->_name = src.getName();
	this->_weap = src.getWeapon();
	this->_enemy = src.getEnemy();
	this->_AP = src.getAP();
	return;
}

Character::~Character()
{

}

Character & Character::operator=(Character const & src)
{
	this->_name = src.getName();
	this->_weap = src.getWeapon();
	this->_enemy = src.getEnemy();
	this->_AP = src.getAP();
	return *this;
}

void		Character::equip(AWeapon	*weap)
{
	this->_weap = weap;
}

void		Character::recoverAP()
{
	if (this->_AP > 30)
		this->_AP = 40;
	else
		this->_AP += 10;
	std::cout << "Recover 10 AP, now at : " << this->_AP << " AP" << std::endl;
}
void		Character::attack(Enemy *ennemy)
{
	if (this->_AP > 0 )
	{
	if ( this->_weap)
	{
		std::cout << this->_name << " attacks " << ennemy->getType() << " with a " << this->_weap->getName() << std::endl;
		this->_weap->attack();
		ennemy->takeDamage(this->_weap->getDamage());
		this->_AP -= this->_weap->getAPCost();
		if (this->_AP < 0)
			this->_AP = 0;
	}
	}
	else
	{
		std::cout << "Not enough AP" << std::endl;
	}
}

AWeapon		*Character::getWeapon() const
{
	return this->_weap;
}

Enemy		*Character::getEnemy() const
{
	return this->_enemy;
}

int			Character::getAP() const
{
	return this->_AP;
}

std::string	Character::getName() const
{
	return this->_name;
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	if (i.getWeapon())
		o <<  i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o <<  i.getName() << " has " << i.getAP() << " AP and is unarmed"  << std::endl;
		return o;
}
