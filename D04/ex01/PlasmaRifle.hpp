/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:47:52 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 17:12:53 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(  );
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle( void );
		PlasmaRifle& operator=(PlasmaRifle const & rhs);
		virtual void		attack() const;

	private:
		/* data */
};

#endif
