/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 11:33:17 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 15:21:33 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " is dead" << std::endl;
}

void		Zombie::announce( void )
{
	std::cout << "< " << this->getName() << " (" << this->getType() << ") > Braiiiiiiinnnssss... " << std::endl;
}

std::string		Zombie::getName( void ) const
{
	return this->_name;
}

void			Zombie::setName( std::string name )
{
	this->_name = name;
}

void		Zombie::setType( std::string type )
{
	this->_type = type;;
}

std::string		Zombie::getType( void ) const
{
	return this->_type;
}
