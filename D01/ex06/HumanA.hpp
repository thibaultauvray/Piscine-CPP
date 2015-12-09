/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 11:59:42 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:27:48 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon &club );
		~HumanA( void );
		void	attack( void );

	private:
		Weapon		&_weapon;
		std::string	_name;

};

#endif
