/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:15:46 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 12:00:48 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( ) : Enemy(170 , "Super Mutant")
{
	this->_hitPoint = 170;
	this->_type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();
	return;

}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh .." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & src)
{
	this->_hitPoint = src.getHP();
	this->_type = src.getType();
	return *this;
}

void		SuperMutant::takeDamage(int d)
{
	if (this->_hitPoint > 0)
		this->_hitPoint -= d + 10;
	if (this->_hitPoint < 0)
	{
		this->_hitPoint = 0;
		std::cout << "Aaargh ..." << std::endl;
	}
}
