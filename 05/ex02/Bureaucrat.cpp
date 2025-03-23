#include "Bureaucrat.hpp"
#include "Form.hpp"

//Constructor
Bureaucrat::Bureaucrat(std::string name, int grade)
    : name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() 
{
}

//getter
std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

//function
void Bureaucrat::incrementGrade() {
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    } catch (std::exception& e) {
        std::cout << *this << " couldn’t sign " << form << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    } catch (std::exception& e) {
        std::cout << *this << " couldn’t execute " << form << " because " << e.what() << std::endl;
    }
}

//overloard
std::ostream & operator<<(std::ostream & o, Bureaucrat const & b) {
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}
