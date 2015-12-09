/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 15:40:32 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/10 11:31:02 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) :  _signed(false), _signit(1), _signex(1), _name("Default")
{

}

Form::Form( std::string name, int gradeit, int gradeex) : _signed(false)
{
	if (gradeit < 1)
		throw Form::GradeTooHighException();
	else if (gradeit > 150)
		throw Form::GradeTooLowException();
	else
		this->_signit = gradeit;

	if (gradeex < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (gradeex > 150)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_signex = gradeex;
	}
	this->_name = name;

}

Form::Form( Form const & src) : _signed(src.getSigned()), _signit(src.getSignit()), _signex(src.getSignex()), _name(src.getName())
{

}

Form::~Form()
{

}

Form &Form::operator=(Form const & src)
{
	this->_signed = src.getSigned();
   	this->_signit = src.getSignit();
   	this->_signex = src.getSignex();
   	this->_name = src.getName();
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Too High Grade";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Too Low Grade";
}

void 				Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_signit)
		throw Form::GradeTooLowException();
	else
	{
		this->_signed = true;
		std::cout << "The form have been signed" << std::endl;
	}
}

bool				Form::getSigned() const { return this->_signed; }
int					Form::getSignit() const { return this->_signit; }
int 				Form::getSignex() const { return this->_signex; }
std::string const 	Form::getName() const {return this->_name; }

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & src)
{ *this = src;}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const & src)
{
		(void)src;
			return *this;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & src)
{ *this = src;}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const &src)
{
		(void)src;
			return *this;
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << "The form is " << i .getName() << "require the grade " << i.getSignit() << "to sign and " << i.getSignex() << " to execute. He is actually" << i.getSigned() << std::endl;
	return o;
}
