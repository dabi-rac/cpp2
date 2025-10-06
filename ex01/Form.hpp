#ifndef FORM_HPP
#define FORM_HPP

#include <string.h>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class Form{

    public:
    ~Form();
    Form(std::string name, int grade, int _gradeToSign, int getGradeToExe);


    std::string getName() const;
    int getGrade() const;
    int getGradeToExe() const;
    int getGradeToSign() const;
    int beSigned(Bureaucrat bureaucrat);

    private:

    const char* _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExe;

};

std::ostream &operator<<(std::ostream &out, const Form &src);

#endif