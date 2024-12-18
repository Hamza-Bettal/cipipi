/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:59:48 by hbettal           #+#    #+#             */
/*   Updated: 2024/12/17 17:09:07 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>

class   Bureaucrat
{
	private:
		const std::string   _name;
		int                 _grade;
		
	public:
		class GradeTooHighException : std::exception
		{
			public:
				const char *what() const noexcept;
		};

		class GradeTooLowException : std::exception
		{
			public:
				const char *what() const noexcept;
		};

		Bureaucrat();
		Bureaucrat( const std::string name, const int grade );
		Bureaucrat( const Bureaucrat &other );
		~Bureaucrat();

		Bureaucrat &operator=( const Bureaucrat &other );
		
		int			getGrade( void ) const;
		std::string	getName( void ) const;
		void		increaseGrade();
		void		decreaseGrade();
};