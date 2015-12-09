/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 17:51:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 13:19:28 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"

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


	std::cout << std::endl;
	NinjaTrap *ninja = new NinjaTrap("Ninja");
	std::cout << std::endl;
	NinjaTrap *ninja2 = new NinjaTrap("Ninja deuxieme du nom");
	ninja->rangedAttack("Coucou");
	ninja->meleeAttack("Coucou");
	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->takeDamage(2);

	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->beRepaired(78);

	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->takeDamage(20);

	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->beRepaired(6);
	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->takeDamage(20);

	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->beRepaired(20);
	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;

	ninja->takeDamage(120);
	std::cout << "Check PV : " << ninja->gethitPoint() << " Check Energy " << ninja->getenergy() << std::endl;
	ninja->ninjaShoebox(*robot);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*ninja2);
	
	delete ninja;
	delete ninja2;
	delete scav;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	SuperTrap	*Super = new SuperTrap("SUPER");
	std::cout << Super->getName() << " Check PV : " << Super->gethitPoint() << " Check Energy " << Super->getenergy() << std::endl;
	std::cout << Super->getName() << " Check MaxPV : " << Super->getmaxHitPoints() << " Check maxEnergy " << Super->getmaxEnergy() << std::endl;
	std::cout << Super->getName() << " Check meleeattack : " << Super->getmeleeAttack() << " Check RangedAttack " << Super->getrangedAttack() << std::endl;
	std::cout << Super->getName() << " Check armorReduction : " << Super->getarmorReduction() << std::endl;

	Super->takeDamage(20);
	std::cout << Super->getName() << " Check PV : " << Super->gethitPoint() << " Check Energy " << Super->getenergy() << std::endl;
	Super->ninjaShoebox(*robot);
	Super->ninjaShoebox(*robot);
	Super->vaulthunter_dot_exe("Goldorak");
	Super->vaulthunter_dot_exe("Goldorak");
	delete robot;
	delete Super;
	return 0;
}
