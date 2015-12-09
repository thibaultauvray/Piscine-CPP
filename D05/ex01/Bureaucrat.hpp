/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 11:20:05 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/10 11:30:28 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const &src );
		Bureaucrat( void );
		~Bureaucrat( void );
		int			getGrade() const;
		std::string	getName() const;

			void		incGrade();
		void		decGrade();
		Bureaucrat& operator=(Bureaucrat const & rhs);
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
		void		signForm(Form &form);



	private:
		std::string	_name;
		int			_grade;
};


std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
