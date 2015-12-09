/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 17:51:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 21:11:20 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << std::endl;
	ScavTrap *scav = new ScavTrap("Scav Trap");

	scav->rangedAttack("Coucou");
	scav->meleeAttack("Coucou");
	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->takeDamage(2);

	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->beRepaired(78);

	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->takeDamage(20);

	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->beRepaired(6);
	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->takeDamage(20);

	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->beRepaired(20);
	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;

	scav->takeDamage(120);
	std::cout << "Check PV : " << scav->gethitPoint() << " Check Energy " << scav->getenergy() << std::endl;
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();

	delete scav;
	return 0;
}
