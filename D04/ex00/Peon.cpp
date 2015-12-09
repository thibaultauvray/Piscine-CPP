/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:02:29 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 16:16:49 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src)
{
	this->_name = src.getName();
	return;

}

Peon::Peon( void )
{

}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;

}

void		Peon::getPolymorphed() const
{
	std::cout<< this->_name << " has been turned into a pink pony !" << std::endl;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

