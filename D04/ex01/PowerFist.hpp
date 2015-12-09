/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:54:01 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 21:58:52 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(  );
		PowerFist( PowerFist const & src  );
		~PowerFist( void );
		PowerFist& operator=(PowerFist const & src);
		virtual void	attack() const;

	private:
		/* data */
};

#endif
