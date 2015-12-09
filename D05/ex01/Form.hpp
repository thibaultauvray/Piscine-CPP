/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 15:40:44 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/10 11:30:24 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{
	public:
		Form( std::string, int gradeit, int gradeex );
		Form( Form const &src );
		Form(  );
		void 	beSigned(Bureaucrat &b);
		~Form( void );
		Form& operator=(Form const & src);
		class GradeTooLowException : public std::exception
		{
		public:
			virtual ~GradeTooLowException() throw();
			GradeTooLowException();
			GradeTooLowException( GradeTooLowException const &src);
			GradeTooLowException&	operator=(GradeTooLowException const &src);
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
		public:
			virtual ~GradeTooHighException() throw();
			GradeTooHighException();
			GradeTooHighException( GradeTooHighException const &src);
			GradeTooHighException&	operator=(GradeTooHighException const &src);
			virtual const char* what() const throw();
		};

	bool				getSigned() const;
	int			getSignit() const;
	int			getSignex() const;
	std::string const 	getName() const;



	private:
		bool			_signed;
		int		_signit;
		int		_signex;
		std::string	 _name;
};
std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
