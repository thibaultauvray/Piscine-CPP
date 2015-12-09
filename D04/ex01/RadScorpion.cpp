/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:21:17 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:58:23 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( ) : Enemy(80 , "RadScorpion")
{
	this->_hitPoint = 80;
	this->_type = "RadScorpion";
	std::cout << "* click click click *" <<  std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();
	return;

}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void		RadScorpion::takeDamage( int d )
{
	this->_hitPoint -= d;
	if (this->_hitPoint <= 0)
	{
		this->_hitPoint = 0;
		std::cout << "* SPROTCH *" << std::endl;
	}
}

RadScorpion & RadScorpion::operator=(RadScorpion const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();
	return *this;
}
