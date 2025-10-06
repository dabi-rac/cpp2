/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:39:10 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/09/13 12:39:10 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

std::string Bureaucrat::increaseGrade()
{
     this->_grade--;
    if(this->_grade < 1 || this->_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    return "grade increased!";
}

std::string Bureaucrat::decreaseGrade()
{
    this->_grade++;
    if(this->_grade <1 || this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return "grade decreased!";
}

void Bureaucrat::signForm(Form form){
    std::ostream &out;
    int success = form.beSigned(this);
    if(success == 1)
        out << this->getName << " signed " << form->getName();
        
}


const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade's is too low!";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade's is too high!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
    out << src.getName() << ", bureaucrat grade " << src.getGrade();
    return out;
}
