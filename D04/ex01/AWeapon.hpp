/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:36:12 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 17:11:46 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
		std::string		_name;
		int				_nbDmg;
		int				_APCost;

	public:
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon( AWeapon const & src);
			virtual ~AWeapon();
			std::string virtual getName() const;
			int getAPCost() const;
			int getDamage() const;
			virtual void attack() const = 0;
			AWeapon& operator=(AWeapon const & src);
};

#endif
