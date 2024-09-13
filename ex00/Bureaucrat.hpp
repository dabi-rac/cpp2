/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:38:58 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/09/13 12:39:01 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
public:
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& otherBureaucrat);
    Bureaucrat& operator=(const Bureaucrat& otherBureaucrat);

    int getGrade() const;
    std::string getName() const;

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

private:
    std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif
