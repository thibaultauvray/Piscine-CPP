/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:54:44 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 18:24:15 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

Bullets::Bullets( ) : GameEntity("|")
{
	this->_HP = 1;
	this->_x = -1;
	this->_y = -1;
}

Bullets::Bullets( Bullets const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	return;

}

void	Bullets::setHP(int d)
{
	this->_HP = d;
}
Bullets::~Bullets()
{

}

Bullets & Bullets::operator=(Bullets const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	return *this;
}

void	Bullets::setX( int x ) { this->_x = x; }
void	Bullets::setY( int y ) { this->_y = y; }

