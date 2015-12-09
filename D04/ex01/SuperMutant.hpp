/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:16:10 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/06 22:01:52 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant( void );
		SuperMutant( SuperMutant const &src);
		~SuperMutant( void );
		SuperMutant& operator=(SuperMutant const & src);
		virtual void takeDamage(int d);

	private:
		/* data */
};

#endif
