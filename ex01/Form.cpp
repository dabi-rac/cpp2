#include "Bureaucrat.hpp"
#include "Form.hpp"

int Form::getGrade() const{   
    return this->_grade;
}

int Form::getGradeToExe() const{   
    return this->_gradeToExe;
}

int Form::_gradeToSign() const{   
    return this->getGradeToSign;
}

// int Form::beSigned(Bureaucrat bureaucrat){
//     if(this.getGrade > Bureaucrat.getGrade)
//     {
//         this._signed = true;
//         return 1;
//     }
//     else{
//         return 0;
//     }
    
// }


std::ostream &operator<<(std::ostream &out, const Form &src) {
    out << src.getName() << ", form grade " << src.getGrade();
    out << src.getName() << ", form grade to sign " << src.getGradeToSign();
    out << src.getName() << ", form grade to exe" << src.getGradeToExe();
    out << src.getName() << ", form  " << if(src._signed) else "not signed";


    return out;
}