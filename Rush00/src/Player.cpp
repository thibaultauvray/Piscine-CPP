/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 14:31:10 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 15:37:16 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

Player::Player( ) : GameEntity()
{
	this->_level = 1;
	this->_HP = 1;
	this->_shape = "O";
	this->_x = 159;
	this->_y = 80;
	this->_bullet = new Bullets [300];
}

Player::Player( Player const & src)
{
	this->_shape = src.getShape();
	this->_x = src.getX();
	this->_y = src.getY();
	this->_HP = src.getHP();
	this->_area = src.getArea();
	return;

}

void		Player::levelUp()
{
	this->_level++;
}

void		Player::HPup(int *score)
{
	(*score)++;
	this->_HP++;
}
int			Player::getLevel() const
{
	return this->_level;

}
Player::~Player()
{

}


void		Player::attackP(int d)
{
	this->_bullet[d].setX(this->_x);
	this->_bullet[d].setY(this->_y - 1);
}

Player & Player::operator=(Player const & src)
{
	(void)src;
	return *this;
}
