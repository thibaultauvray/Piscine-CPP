/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 17:51:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 20:30:00 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main( void )
{
	FragTrap *robot = new FragTrap("ClapTrap");

	robot->rangedAttack("Coucou");
	robot->meleeAttack("Coucou");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->takeDamage(2);

	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->beRepaired(78);

	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->takeDamage(20);

	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->beRepaired(6);
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->takeDamage(20);

	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->beRepaired(20);
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;

	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->vaulthunter_dot_exe("Goldorak");
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	robot->takeDamage(120);
	std::cout << "Check PV : " << robot->gethitPoint() << " Check Energy " << robot->getenergy() << std::endl;
	delete robot;
	return 0;
}
