/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 13:46:46 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:08:03 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void		randomname( void )
{
	int		i;
	ZombieEvent	Zevent;
	Zombie		*Random;

	i = 0;
	while(i < 5) {
		Zevent.setZombieType("Random pour les hommes");
		Random = Zevent.randomChump();
		delete Random;
		i++;
	}
}

int  main( void )
{
	Zombie		Kendji;
	Zombie		*Mondotek;
	ZombieEvent		Zevent;

	std::cout << "========= SUR LA STACK =======" << std::endl;
	Kendji.setName("Kendji Chirac");
	Kendji.setType("Gitan");
	Kendji.announce();

	std::cout << "========= DANS LA MEMOIRE ========" << std::endl;
	Zevent.setZombieType("Tektonik");
	Mondotek = Zevent.newZombie("Mondotek");
	Mondotek->announce();
	delete Mondotek;
	std::srand(time(NULL));
	std::cout << "========= RANDOM ========" << std::endl;
	randomname();
	return 0;
}
