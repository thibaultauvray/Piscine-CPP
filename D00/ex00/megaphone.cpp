/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 12:14:51 by tauvray           #+#    #+#             */
/*   Updated: 2015/10/30 12:31:58 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	(void)av;
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(j < ac)
		{
			while (av[j][i])
			{
				av[j][i] = toupper(av[j][i]);
				i++;
			}
			std::cout << av[j] << " ";
			j++;
			i = 0;
		}
	}
	std::cout << std::endl;
}
