#include "Form.hpp"
#include "Bureaucrat.hpp"

//constructor 
AForm::AForm(std::string name, int signGrade, int execGrade)
    : name(name), signedStatus(false), signGrade(signGrade), execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name), signedStatus(other.signedStatus), signGrade(other.signGrade), execGrade(other.execGrade) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        signedStatus = other.signedStatus;
    }
    return *this;
}

AForm::~AForm() {

}

//getter
std::string AForm::getName() const {
    return name;
}

int AForm::getSignGrade() const {
    return signGrade;
}

int AForm::getExecGrade() const {
    return execGrade;
}


//function
bool AForm::isSigned() const {
    return signedStatus;
}

void AForm::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > signGrade)
        throw GradeTooLowException();
    signedStatus = true;
}

//overloard
std::ostream & operator<<(std::ostream & o, AForm const & form) {
    o << form.getName() << ", sign grade " << form.getSignGrade() << ", exec grade " << form.getExecGrade();
    return o;
}
