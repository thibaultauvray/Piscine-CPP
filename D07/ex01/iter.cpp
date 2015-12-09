/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 13:37:04 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/12 19:25:22 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
template < typename T, typename U, typename F>
void		iter( T *a, U b, F (*f)(T *) )
{
	U i = 0;
	while (i < b)
	{
		f(&a[i]);
		i++;
	}
}

template < typename U >
void	ft_print(U *var) {
		std::cout << *var << std::endl;
}

int		main() {
	int			tabint[10] = {9, 8, 7, 6, 5, -4, 3, 2, 1, 0};
	std::string		chartab[10] = {"ddd", "Patrick", "Palin", "Poilue", "PAris", "Balouche", "ds", "Eddd", "dsasd"};

	std::cout << "iter<int, int, void>(tabint, 10, ft_print);" << std::endl;
	iter<int, int, void>(tabint, 10, ft_print<int>);

	std::cout << "iter<std::string, int, void>(std::string, 10, ft_print);" << std::endl;
	iter<std::string, int, void>(chartab, 10, ft_print<std::string>);

	return 0;
}
