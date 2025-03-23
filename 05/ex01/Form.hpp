#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat; // Forward declaration to avoid circular dependency

class Form {
public:
    // Constructors and Destructor
    Form(const std::string& name, int signGrade, int execGrade);
	Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    // Getters
    const std::string& getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

    // Methods
    void beSigned(const Bureaucrat& bureaucrat);

    // Exception classes
    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };

private:
    const std::string name;
    bool signedStatus;
    const int signGrade;
    const int execGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif // FORM_HPP
