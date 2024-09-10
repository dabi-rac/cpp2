/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:27:17 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/09/10 18:30:17 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    public:
    Bureaucrat(std::string name const, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& otherBureaucrat);
    Bureaucrat& operator=(const Bureaucrat& otherBureaucrat);
    
    getGrade();
    getName();
    GradeTooHighException();
    GradeTooLowException();
};

#endif