/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:25:36 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 10:36:49 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	private:
		std::string _name;
		AWeapon	*_weap;
		Enemy	*_enemy;
		int		_AP;

	public:
		Character(std::string const & name);
		Character(Character const &src);
		Character &operator=(Character const & src);
		~Character();
		void recoverAP();
		void equip(AWeapon* weap);
		void attack(Enemy* ennemy);
		std::string virtual getName() const;
		int		virtual getAP() const;
		Enemy	virtual	*getEnemy() const;
		AWeapon	virtual	*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &o, Character const &i);
#endif
