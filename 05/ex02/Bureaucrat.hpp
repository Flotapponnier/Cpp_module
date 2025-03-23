#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
public:
	//constructor
    Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

	//getter
    std::string getName() const;
    int getGrade() const;

	//function
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm& form);
    void executeForm(AForm const & form) const;

	//exception
    class GradeTooHighException : public std::exception {
        const char* what() const throw() {
            return "Grade is too high!";
        }
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw() {
            return "Grade is too low!";
        }
    };

private:
    const std::string name;
    int grade;
};

//overload
std::ostream & operator<<(std::ostream & o, Bureaucrat const & b);

#endif
