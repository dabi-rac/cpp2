/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:45:21 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/09/10 19:48:31 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()
{
    return this->_Value;
}

int Bureaucrat::getGrade()
{
    return this->_Value;
}

Bureaucrat::Bureaucrat(std::string name const, int grade)
{
    if(grade < 1)
        throw 
}

Bureaucrat::~Bureaucrat()
{}