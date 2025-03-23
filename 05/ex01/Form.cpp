#include "Form.hpp"
// Constructor
Form::Form(const std::string& name, int signGrade, int execGrade)
    : name(name), signedStatus(false), signGrade(signGrade), execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1) {
        throw GradeTooHighException();
    }
    if (signGrade > 150 || execGrade > 150) {
        throw GradeTooLowException();
    }
}

Form::Form(const Form& other)
    : name(other.name), signedStatus(other.signedStatus), signGrade(other.signGrade), execGrade(other.execGrade) {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        signedStatus = other.signedStatus;
    }
    return *this;
}

// Destructor
Form::~Form() {}

// Getters
const std::string& Form::getName() const {
    return name;
}

bool Form::isSigned() const {
    return signedStatus;
}

int Form::getSignGrade() const {
    return signGrade;
}

int Form::getExecGrade() const {
    return execGrade;
}

// Sign the form if the bureaucrat's grade is high enough
void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > signGrade) {
        throw GradeTooLowException();
    }
    signedStatus = true;
}

//Exception

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Overload
std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form: " << form.getName() << ", Signed: " << (form.isSigned() ? "Yes" : "No")
        << ", Sign Grade: " << form.getSignGrade() << ", Execution Grade: " << form.getExecGrade();
    return out;
}
