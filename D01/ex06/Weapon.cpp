/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 11:49:57 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:27:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->setType(type);
}

Weapon::~Weapon( void )
{

}

std::string		Weapon::getType( void ) const
{
	return this->_type;
}

void			Weapon::setType( std::string type)
{
	this->_type = type;
}
