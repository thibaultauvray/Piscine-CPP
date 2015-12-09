/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 12:06:10 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:27:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main( void )
{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);

	bob.attack();

	club.setType("some other type of club");

	bob.attack();

	Weapon club2 = Weapon("crude spiked club");

	HumanB jim("Jim");

	jim.setWeapon(club2);

	jim.attack();

	club2.setType("some other type of club");

	jim.attack();
}
