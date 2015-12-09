/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:20:32 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:37:55 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human{
	public:
		Human( void );
		~Human( void);
		Brain &getBrain( void );
		std::string	identify( void );

	private:
		Brain	_brain;
};

#endif
