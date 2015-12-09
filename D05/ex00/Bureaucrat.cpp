/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 11:23:03 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/09 15:48:46 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Default"), _grade(150)
{

}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;

}

Bureaucrat::Bureaucrat( Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{

}

Bureaucrat::~Bureaucrat()
{

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too High Grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too Low Grade";
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	(void)src;
	return *this;
}

void		Bureaucrat::incGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", Bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}

int			Bureaucrat::getGrade() const { return this->_grade; }
std::string	Bureaucrat::getName() const {return this->_name; }

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & src)
{ *this = src;}
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & src)
{
		(void)src;
			return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & src)
{ *this = src;}
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &src)
{
		(void)src;
			return *this;
}

