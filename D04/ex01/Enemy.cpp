/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:43:20 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:04:39 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( int HP, std::string const &type) : _hitPoint(HP), _type(type)
{

}

Enemy::Enemy( void )
{
}

Enemy::Enemy( Enemy const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();

}

Enemy::~Enemy()
{

}

void		Enemy::setHP( int d )
{
	this->_hitPoint = d;
}

std::string Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hitPoint;
}

void		Enemy::takeDamage(int d)
{
	if (this->_hitPoint > 0)
		this->_hitPoint -= d;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
}

Enemy & Enemy::operator=(Enemy const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();
	return *this;
}

