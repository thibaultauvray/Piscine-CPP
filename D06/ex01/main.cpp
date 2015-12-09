/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 19:03:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/11 17:30:52 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data { 
	std::string s1;
	int n;
	std::string s2;
};

std::string		charArray(void) {
	std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	std::string result;

	result.resize(8);
	for (int i = 0; i < 8; i++)
		result[i] = charset[std::rand() % 62];
	return result;
}

Data * deserialize( void * raw )
{
	return static_cast<Data *>(raw);
}

void	*serialize( void )
{
	Data		*s = new Data;

	std::srand(std::time(0));
	s->s1 = charArray();	
	s->n = std::rand();
	s->s2 = charArray();	

	std::cout << "Serialize " << s->s1 << s->n << s->s2 << std::endl;
	return s;
}

int		main(void)
{
	void	*seq = serialize();
	Data	*s = deserialize(seq);

std::cout << "Unserialize" << std::endl;
	std::cout << s->s1 << std::endl;
	std::cout << s->n << std::endl;
	std::cout << s->s2 << std::endl;

	delete s;
	return 0;
}

