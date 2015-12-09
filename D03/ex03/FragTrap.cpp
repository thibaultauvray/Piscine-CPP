/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:42:26 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/05 22:08:12 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src.getName(), src.gethitPoint(), src.getmaxHitPoints(), src.getenergy(), src.getmaxEnergy(), src.getlevel(), src.getmeleeAttack(), src.getrangedAttack(), src.getarmorReduction())
{
	*this = src;
	return;
	std::cout << "Recompiling my combat code" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD" << std::endl;

}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string nameAttack[] = {"I am a tornado of death and bullets!", "Wow, did I really do that?", "Ooooh! Terrabits!", "Meatsplosion"};
	std::srand(time(NULL) + clock());
	if (this->_energy >= 25)
	{
		int		damage = std::rand() % 25;
		std::cout << "FR4G-TP : " << this->_name << " use " << nameAttack[std::rand() % 4] << ", "<< target << "  lost " << damage << " HP."  << std::endl;
		this->_energy -= 25;
	}
	else
	{
		std::cout << "Not enough energy" << std::endl;
	}


}
