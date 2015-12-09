/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 14:31:58 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 18:10:00 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

GameEntity::GameEntity( )
{
	return ;
}

GameEntity::GameEntity(std::string shape) : _shape(shape)
{
	return ;
}

GameEntity::GameEntity( GameEntity const & src)
{
	this->_shape = src.getShape();
	this->_x = src.getX();
	this->_y = src.getY();
	this->_HP = src.getHP();
	this->_area = src.getArea();
	return;
}

GameEntity::~GameEntity()
{

}

void			GameEntity::take_damage(int *score){
	(*score)++;
	this->_HP-- ;
	if (this->_HP <= 0)
		this->die();
}

void GameEntity::die(){
	mvprintw(this->_y, this->_x, " ");
	this->_HP = 0;
	this->_x = -1;
}

void			GameEntity::moveDown()
{
	mvprintw(this->_y - 1, this->_x, " ");
	if (this->_y <= 82)
		this->_y++;
	else if (this->_y == 83)
	{
		mvprintw(this->_y, this->_x, "-");
		this->_HP = 0;
	}
}

void			GameEntity::moveUp()
{
	if (this->_y == 0)
		mvprintw(this->_y, this->_x, "-");
	if (this->_y >= 0)
	{
		mvprintw(this->_y + 1, this->_x, " ");
		this->_y--;
	}
}

void			GameEntity::moveLeft()
{
	if (this->_x > 110)
	{
		mvprintw(this->_y, this->_x, " ");
		this->_x--;
	}

}

void			GameEntity::moveRight()
{
	if (this->_x < 207) // LIMITE EN X
	{
		mvprintw(this->_y, this->_x, " ");
		this->_x++;
	}
}

GameEntity &GameEntity::operator=(GameEntity const & src)
{
	(void)src;
	return *this;
}

std::string		GameEntity::getShape() const{return this->_shape;}
int				GameEntity::getX() const{	return this->_x; }
int				GameEntity::getY() const{	return this->_y; }
int				GameEntity::getHP() const{	return this->_HP; }
int				GameEntity::getArea() const{	return this->_area; }
