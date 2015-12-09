/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 11:38:23 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/09 14:59:12 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*b = new Bureaucrat("Dd", 149);

	std::cout << *b;
	try
	{
		b->decGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *b;
	std::cout << "On increment encore" << std::endl;
	try
	{
		b->decGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	delete b;
	std::cout << "Jessaye de creer un bureaute avec 0 en grade" << std::endl;
	try
	{
		Bureaucrat *a = new Bureaucrat("DD", 0);
		a->getName();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Jessaye de creer un bureaute avec 151 en grade" << std::endl;
	try
	{
		Bureaucrat *c = new Bureaucrat("DD", 151);
		c->getName();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat *e = new Bureaucrat("DD", 2);
	std::cout << *e;
	try
	{
		e->incGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << *e;
	try
	{
		e->incGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << *e;
}
