/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 13:09:28 by tauvray           #+#    #+#             */
/*   Updated: 2015/10/30 16:58:57 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

Phonebook::Phonebook( void )
{
	return;
}

Phonebook::~Phonebook (void)
{
	return;
}

std::string	Phonebook::getLogin( void ) const
{
	return (this->_login);
}

void		Phonebook::setLogin( std::string buff )
{
	this->_login = buff;
}

std::string	Phonebook::getNom( void ) const
{
	return (this->_nom);
}

void		Phonebook::setNom( std::string buff )
{
	this->_nom = buff;
}

std::string	Phonebook::getPseudo( void ) const
{
	return (this->_pseudo);
}

void		Phonebook::setPseudo( std::string buff )
{
	this->_pseudo = buff;
}

std::string	Phonebook::getPrenom( void ) const
{
	return (this->_prenom);
}

void		Phonebook::setPrenom( std::string buff )
{
	this->_prenom = buff;
}

std::string	Phonebook::getCodepostal( void ) const
{
	return (this->_codepostal);
}

void		Phonebook::setCodepostal( std::string buff )
{
	this->_codepostal = buff;
}

std::string	Phonebook::getMail( void ) const
{
	return (this->_mail);
}

void		Phonebook::setMail( std::string buff )
{
	this->_mail = buff;
}

std::string	Phonebook::getTelephone( void ) const
{
	return (this->_telephone);
}

void		Phonebook::setTelephone( std::string buff )
{
	this->_telephone = buff;
}

std::string	Phonebook::getDate( void ) const
{
	return (this->_daten);
}

void		Phonebook::setDate( std::string buff )
{
	this->_daten = buff;
}

std::string	Phonebook::getViande( void ) const
{
	return (this->_viande);
}

void		Phonebook::setViande( std::string buff )
{
	this->_viande = buff;
}

std::string	Phonebook::getCouleur( void ) const
{
	return (this->_couleur);
}

void		Phonebook::setCouleur( std::string buff )
{
	this->_couleur = buff;
}

std::string	Phonebook::getSecret( void ) const
{
	return (this->_secret);
}

void		Phonebook::setSecret( std::string buff )
{
	this->_secret = buff;
}
