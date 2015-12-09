/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:13:27 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:37:30 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
}

Brain::~Brain( void )
{

}

std::string		Brain::identify( void ) const
{
	std::stringstream ret;
	ret << this;
	return ret.str();
}
