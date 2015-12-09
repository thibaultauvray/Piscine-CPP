/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 11:58:59 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:12:49 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &club) : _weapon(club), _name(name) 
{
}

HumanA::~HumanA( void )
{

}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
