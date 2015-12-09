/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:36:40 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 18:56:23 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string		ZombieHorde::genName( void ) const
{
	std::string alphanum[] = {"Mondotek", "Yelle", "Lorie", "Sarah Michelle",
		"Booba", "Kaaris", "Vlad", "Ilona", "Priscilla", "Annie Cordy", "Blingee",
		"Tragedie", "Tribal King", "Alex King", "Crazy Frog", "Garou", "Helene Segara",
		"Celine Dion", "Magick System", "Alizee", "Fodel", "Leslie", "Francis Lalanne",
		"Nadiya", "Diams", "Black M", "La fouine", "Maitre Gims", "Destiny Child", "Patrick Sebastien"};
	std::srand(std::time(NULL) + std::clock());

	return alphanum[std::rand() % 30];
}

void			ZombieHorde::randomChump( Zombie *zomb )
{
	zomb->setName(this->genName());
	zomb->setType("Horde");

}

ZombieHorde::ZombieHorde( int N )
{
	this->tab = new Zombie[N];
	int			i;

	i = 0;
	while (i < N)
	{
		randomChump(&this->tab[i]);
		this->announce(&this->tab[i]);
		i++;
	}
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->tab;

}

void		ZombieHorde::announce( Zombie *Zomb)
{
	Zomb->announce();
}
