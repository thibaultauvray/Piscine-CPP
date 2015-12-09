/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 18:03:22 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:09:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int					main(int ac, char **av)
{
	(void)ac;
	(void)av;
	ZombieHorde		Horde( 10 );

	std::cout << "Jaffiche le nom du 6eme Zombie => " << Horde.tab[5].getName() << std::endl;
	std::cout << "J'annonce le 2 Zombie => ";
	Horde.tab[1].announce();
	return (0);
}
