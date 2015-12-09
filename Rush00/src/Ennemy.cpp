/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ennemy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <tauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 18:57:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 19:00:04 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ennemy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 14:31:10 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 18:23:14 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

Ennemy::Ennemy( )
{
	this->_HP = 1;
	this->_shape = "A";
	int xmax[2] = {110, 207};
	int ymax[2] = {0, 50};

	this->_x = xmax[0] + (rand() % (int)(xmax[1] -xmax[0] + 1));
	this->_y = ymax[0] + (rand() % (int)(ymax[1] -ymax[0] + 1));
	this->_area = this->_x * this->_x + this->_y * this->_y;

}

Ennemy::Ennemy( Ennemy const & src)
{
	this->_shape = src.getShape();
	this->_x = src.getX();
	this->_y = src.getY();
	this->_HP = src.getHP();
	this->_area = src.getArea();
	return;

}

Ennemy::Ennemy(std::string shape, int x, int y)
{
	this->_shape = shape;
	this->_x = x;
	this->_y = y;
	this->_HP = 3;
	this->_bullet = new Bullets[30];
	return;

}

void		Ennemy::refreshData(int n)
{
	this->_HP = rand() % n;
	this->_shape = '@' + this->_HP;
	int xmax[2] = {110, 207};
	int ymax[2] = {0, 50};

	this->_x = xmax[0] + (rand() % (int)(xmax[1] -xmax[0] + 1));
	this->_y = ymax[0] + (rand() % (int)(ymax[1] -ymax[0] + 1));
	this->_area = this->_x * this->_x + this->_y * this->_y;
}

Ennemy::~Ennemy()
{

}

void		Ennemy::refreshData()
{
	int xmax[2] = {110, 207};
	int ymax[2] = {0, 50};

	this->_HP = 2;
	this->_x = xmax[0] + (rand() % (int)(xmax[1] -xmax[0] + 1));
	this->_y = ymax[0] + (rand() % (int)(ymax[1] -ymax[0] + 1));
	this->_area = this->_x * this->_x + this->_y * this->_y;
}

int			Ennemy::detectVaisseau(Ennemy  *horde)
{
	int	j;

	j = 0;
	for (int i = 0; i < 29 ; i++){
		if (horde[i].getHP() <= 0)
		{
			j++;
		}
	}
	return (j);
}

void		Ennemy::attack(int d)
{
	this->_bullet[d].setHP(1);
	this->_bullet[d].setX(this->_x);
	this->_bullet[d].setY(this->_y + 1);
}

Ennemy & Ennemy::operator=(Ennemy const & src)
{
	(void)src;
	return *this;
}
