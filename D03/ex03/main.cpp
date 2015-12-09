/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 17:51:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 11:05:13 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
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
	
	delete robot;
	delete ninja;
	delete ninja2;
	delete scav;
	return 0;
}
