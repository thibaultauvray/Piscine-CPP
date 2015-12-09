/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:23:55 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:05:20 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main( void )
{
	Pony	Simatra("Simatra");
	Pony	*Edward = new Pony("Edward");

	std::cout << "Le poney " << Edward->name << " a marche " << Edward->walk(10) << " km" << std::endl;
	std::cout << "Le poney " << Edward->name << " a marche " << Edward->walk(10) << " km" << std::endl;
	std::cout << "Le poney " << Edward->name << " est actuellement a " << Edward->getWalk() << " km" << std::endl;

	std::cout << "Pendant ce temps, le poney " << Simatra.name << " marche " << Simatra.walk(10) << " km" <<std::endl;
	delete Edward;
	std::cout << "(Le delete )" << std::endl;
	std::cout << Simatra.name << " Est encore dans la stack" << std::endl;
	std::cout << Simatra.name << " apprend le deces de son ami Edward est se suicide de tristesse" << std::endl;
	return 0;
}
