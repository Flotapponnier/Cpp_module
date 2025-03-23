#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat;

class AForm {
public:
	//constructor
    AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

	//getter
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;

	//function
    bool isSigned() const;
    void beSigned(Bureaucrat const & bureaucrat);

	//virtual
    virtual void execute(Bureaucrat const & executor) const = 0;

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
	class FormNotSignedException : public std::exception {
    const char* what() const throw() {
        return "Form is not signed!";
    }
	};

private:
    const std::string name;
    bool signedStatus;
    const int signGrade;
    const int execGrade;
};

std::ostream & operator<<(std::ostream & o, AForm const & form);

#endif

