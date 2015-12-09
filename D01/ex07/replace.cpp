/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:44:26 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/03 19:00:23 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void		replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream		ifs(filename);
	std::string			filenamere;
	std::string			content;
	int					i;
	size_t start_pos = 0;

	if (s1.empty() || s2.empty())
	{
		std::cerr << "s1 ou s2 est vide" << std::endl;
	}
	else
	{
	i = 0;
	filenamere = filename;
	while(filenamere[i]) {
		filenamere[i] = toupper(filenamere[i]);
		i++;
	}
	filenamere.append(".replace");
	if(ifs)  // si l'ouverture a réussi
	{
		std::ofstream fichier(filenamere, std::ios::out | std::ios::trunc);
		while(getline(ifs, content))
		{
			while((start_pos = content.find(s1, start_pos)) != std::string::npos) {
				         content.replace(start_pos, s1.length(), s2);
						          start_pos += s1.length(); // ...
			}
			fichier << content << std::endl;
			start_pos = 0;
		}
		fichier.close();
		ifs.close();  // on ferme le fichier
		std::cout << "Tout les occurences de <<" << s1 << ">> ont ete remplace par <<" << s2 << ">> dans le fichier " << filenamere << std::endl;
	}
	else
		std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
	}
}
