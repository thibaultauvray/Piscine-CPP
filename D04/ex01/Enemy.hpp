/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:43:47 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 11:53:21 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	protected:
		int		_hitPoint;
		std::string	_type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy( void );
		Enemy( Enemy const &src );
		virtual ~Enemy();
		void	setHP(int d);
		std::string virtual getType() const;
		int getHP() const;
		Enemy &operator=(Enemy const & src);
		virtual void takeDamage(int d);
};

#endif
