/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 11:38:23 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/10 11:32:36 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
int 	main()
{
	try {
		Form form("Formulaire 1", 120, 120);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 1 " << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 1 " << e.what() << std::endl;
	}

	try {
		Form form("Formulaire 2", 15, 0);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 2 " << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 2 " << e.what() << std::endl;
	}

	try {
		Form form("Formulaire 3", 13, 350);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "Formulaire 3 " << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "Formulaire 3 " << e.what() << std::endl;
	}

	Form form("Formulaire 3", 13, 16);
	Bureaucrat bur1("Jacques", 40);
	Bureaucrat bur2("Sylvain", 3);

	bur1.signForm(form);
	bur2.signForm(form);

	return 0;
}
