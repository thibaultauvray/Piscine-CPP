/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:44:47 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/04 21:05:29 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string strr ) : name(strr)
{
	this->km = 0;
	std::cout << "Un nouveau poney du beau nom de " << this->name << " est nee." <<std::endl;
}

Pony::~Pony( void )
{
	std::cout << "Malheuresement," << this->name << " est mort de deces, RT si c Trist" << std::endl;
}

int		Pony::walk( int km )
{
	this->km += km;
	return (this->km);
}

int		Pony::getWalk( void )
{
	return (this->km);
}
