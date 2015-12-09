/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:24:37 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:38:04 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>

int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;

	std::cout << bob.getBrain().identify() << std::endl;

}
