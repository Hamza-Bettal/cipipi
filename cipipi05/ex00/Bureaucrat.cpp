/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:07:02 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/17 17:29:09 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(1)
{
}

Bureaucrat::Bureaucrat( const std::string name, const int grade ) : _name(name), _grade(grade)
{
    if (this->_grade > 150)
        Bureaucrat::GradeTooHighException();
    else if (this->_grade < 1)
        Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &other )
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &other )
{
    if (this != &other)
        this->_grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string    Bureaucrat::getName() const
{
    return this->_name;
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "grade cant be more than 150!";
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "grade cant be less than 1!";  
}

int    Bureaucrat::getGrade() const
{
    return this->_grade;
}

void    Bureaucrat::increaseGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooHighException();
}
   
void    Bureaucrat::decreaseGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooLowException();
}

