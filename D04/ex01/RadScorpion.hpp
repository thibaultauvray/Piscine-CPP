/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:21:30 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:53:15 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(  );
		RadScorpion( RadScorpion const &src );
		~RadScorpion( void );
		virtual void takeDamage(int d);
		RadScorpion& operator=(RadScorpion const & src);

	private:
		/* data */
};

#endif
