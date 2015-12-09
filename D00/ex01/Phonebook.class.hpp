/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 13:10:44 by tauvray           #+#    #+#             */
/*   Updated: 2015/10/30 14:47:41 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {

	public:
		Phonebook( void );
		~Phonebook( void );

		/*	SETTER		*/
		/* 	GETTER		*/

		std::string		getLogin( void ) const;
		void			setLogin( std::string buff);

		std::string		getNom( void ) const;
		void			setNom( std::string buff);

		std::string		getPrenom( void ) const;
		void			setPrenom( std::string buff);

		std::string		getPseudo( void ) const;
		void			setPseudo( std::string buff);

		std::string		getCodepostal( void ) const;
		void			setCodepostal( std::string buff);

		std::string		getMail( void ) const;
		void			setMail( std::string buff);

		std::string		getTelephone( void ) const;
		void			setTelephone( std::string buff);

		std::string		getDate( void ) const;
		void			setDate( std::string buff);

		std::string		getViande( void ) const;
		void			setViande( std::string buff);

		std::string		getCouleur( void ) const;
		void			setCouleur( std::string buff);

		std::string		getSecret( void ) const;
		void			setSecret( std::string buff);
	private:
		std::string		_prenom;
		std::string		_nom;
		std::string		_pseudo;
		std::string		_login;
		std::string		_codepostal;
		std::string		_mail;
		std::string		_telephone;
		std::string		_daten;
		std::string		_viande;
		std::string		_couleur;
		std::string		_secret;
};

#endif
