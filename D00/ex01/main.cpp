/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 14:16:16 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 16:34:07 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

bool forever = true;

Phonebook		prompt(Phonebook list) {
	std::string buff;

	std::cout << "Login ?" << std::endl;
	std::cin >> buff;
	list.setLogin(buff);
	std::cout << "Nom ?" << std::endl;
	std::cin >> buff;
	list.setNom(buff);
	std::cout << "Prenom ?" << std::endl;
	std::cin >> buff;
	list.setPrenom(buff);
	std::cout << "Pseudo ?" << std::endl;
	std::cin >> buff;
	list.setPseudo(buff);
	std::cout << "Code Postal ?" << std::endl;
	std::cin >> buff;
	list.setCodepostal(buff);
	std::cout << "Mail ?" << std::endl;
	std::cin >> buff;
	list.setMail(buff);
	std::cout << "Telephone ?" << std::endl;
	std::cin >> buff;
	list.setTelephone(buff);
	std::cout << "Date de naissance ?" << std::endl;
	std::cin >> buff;
	list.setDate(buff);
	std::cout << "Viande favorite ?" << std::endl;
	std::cin >> buff;
	list.setViande(buff);
	std::cout << "Couleur favorite ?" << std::endl;
	std::cin >> buff;
	list.setCouleur(buff);
	std::cout << "Secret le plus noir ?" << std::endl;
	std::cin >> buff;
	list.setSecret(buff);
	return (list);
}

void sighandler(int sig)
{
	(void)sig;
	forever = false;
}


std::string	getMaxSize(std::string str)
{
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	return (str);
}

void		ft_search(Phonebook *list)
{
	int			j;
	int			i;
	std::string	buff;

	i = 0;
	j = -1;
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nickname" ;
	std::cout << "|" << std::endl;
	while (i != 7 && !list[i].getLogin().empty())
	{
		std::cout << std::setw(10) << std::right << i;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << getMaxSize(list[i].getPrenom());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << getMaxSize(list[i].getNom());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << getMaxSize(list[i].getPseudo());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "Votre index ?" << std::endl;
	std::cin >> buff;
	if (buff.compare("0") == 0)
		j = 0;
	if (buff.compare("1") == 0)
		j = 1;
	if (buff.compare("2") == 0)
		j = 2;
	if (buff.compare("3") == 0)
		j = 3;
	if (buff.compare("4") == 0)
		j = 4;
	if (buff.compare("5") == 0)
		j = 5;
	if (buff.compare("6") == 0)
		j = 6;
	if (buff.compare("7") == 0)
		j = 7;
	if (j == -1 || list[j].getLogin().empty() )
		std::cout << "ERREUR" << std::endl;
	else
	{
		std::cout << "First Name : ";
		std::cout << list[j].getPrenom() << std::endl;
		std::cout << "Last Name : ";
		std::cout << list[j].getNom() << std::endl;
		std::cout << "Nickname : ";
		std::cout << list[j].getPseudo() << std::endl;
		std::cout << "Login : ";
		std::cout << list[j].getLogin() << std::endl;
		std::cout << "Postal Adress : ";
		std::cout << list[j].getCodepostal() << std::endl;
		std::cout << "Mail : ";
		std::cout << list[j].getMail() << std::endl;
		std::cout << "Phone : ";
		std::cout << list[j].getTelephone() << std::endl;
		std::cout << "Birthday Date : ";
		std::cout << list[j].getDate() << std::endl;
		std::cout << "Birthday Date : ";
		std::cout << list[j].getDate() << std::endl;
		std::cout << "Favorite Meal : ";
		std::cout << list[j].getViande() << std::endl;
		std::cout << "Favorite Color : ";
		std::cout << list[j].getCouleur() << std::endl;
		std::cout << "Darkest Secret : ";
		std::cout << list[j].getSecret() << std::endl;
	}
}

int			main() {
	Phonebook	list[8];
	int		i = 0;
	std::string buff;

	//ADD
	//
	while (forever)
	{
		signal(SIGABRT, &sighandler);
		signal(SIGTERM, &sighandler);
		signal(SIGHUP, &sighandler);
		std::cout << "Please type ADD, SEARCH or EXIT : " << std::endl;
		std::cin >> buff;
		i = 0;
		if (buff.compare("ADD") == 0)
		{
			i = 0;
			while (i < 8)
			{
				if (list[i].getLogin().empty())
				{
					list[i] = prompt(list[i]);
					break ;
				}
				else if (i == 7)
					std::cout << "Too many entry" << std::endl;
				i++;
			}

		}
		if (buff.compare("SEARCH") == 0)
		{
			ft_search(list);
		}
		if (buff.compare("EXIT") == 0)
		{
			break ;
		}
		if (std::cin.fail())
		{
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			forever = false;
		}
	}
	//	instance.bar();

	return 0;
}

