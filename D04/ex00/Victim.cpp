/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:20:08 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 16:11:37 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void )
{

}

Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim( Victim const & src)
{
	*this = src;
	return;

}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

std::string		Victim::getName( void ) const
{
	return this->_name;
}

void		Victim::introduce( void ) const
{
	std::cout << "I'm " << this->_name << " and I like otters !" << std::endl;
}

void 		Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
		o <<  "I'm " << i.getName() << " and I like otters !" << std::endl;
		return o;
}
