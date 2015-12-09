/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 11:50:47 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 18:56:39 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
}

ZombieEvent::~ZombieEvent( void )
{
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string		ZombieEvent::getType( void ) const
{
	return this->_type;
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie	*zomb = new Zombie();

	zomb->setName(name);
	zomb->setType(this->_type);

	return zomb;
}

std::string		ZombieEvent::genName( void ) const
{
	std::string alphanum[] = {"Mondotek", "Yelle", "Lorie", "Sarah Michelle",
		"Booba", "Kaaris", "Vlad", "Ilona", "Priscilla", "Annie Cordy", "Blingee",
		"Tragedie", "Tribal King", "Alex King", "Crazy Frog", "Garou", "Helene Segara",
		"Celine Dion", "Magick System", "Alizee", "Fodel", "Leslie", "Francis Lalanne",
		"Nadiya", "Diams", "Black M", "La fouine", "Maitre Gims", "Destiny Child", "Patrick Sebastien"};
	std::srand(std::time(NULL) + std::clock());

	return alphanum[std::rand() % 30];
}

Zombie*			ZombieEvent::randomChump( void )
{
	Zombie	*zomb = new Zombie();

	zomb->setName(this->genName());
	zomb->setType(this->_type);
	zomb->announce();

	return (zomb);
}
