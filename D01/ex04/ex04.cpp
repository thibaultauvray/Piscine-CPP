/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:15:50 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/02 20:07:51 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int					main()
{
	std::string		brains = "HI THIS IS BRAIN" ;

	std::string		*ptrString = &brains;
	std::string		&refString = brains;

	std::cout << "POINTER : " << *ptrString << std::endl;
	std::cout << "REFERENCES : " << refString << std::endl;

	return (0);
}
