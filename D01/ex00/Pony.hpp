/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 13:46:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/10/31 14:30:34 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony {

	public:
		Pony(std::string strr);
		~Pony(void);

		std::string	name;
		int			km;

		int		walk( int km );
		int		getWalk( void );
};
#endif
