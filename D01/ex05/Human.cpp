/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:17:26 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 14:04:35 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
}

Human::~Human( void )
{

}

std::string		 Human::identify( void )
{
	std::stringstream ret;
	ret << &this->_brain;
	return ret.str();
}
Brain		&Human::getBrain( void ) // Renvoie la reference de brain donc cest pareil pas une copie MDR
{
	return this->_brain;
}
