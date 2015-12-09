/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:44:17 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 16:16:44 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << " " << this->_title << " is born !" << std::endl;
}

Sorcerer::Sorcerer( void)
{
}

Sorcerer::Sorcerer( Sorcerer const & src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	return;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}
void 		Sorcerer::polymorph(Victim const &src) const
{
	src.getPolymorphed();
}

std::string		Sorcerer::getName( void ) const
{
	return this->_name;
}

std::string		Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void		Sorcerer::introduce( void ) const
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
		o <<  "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
		return o;
}
