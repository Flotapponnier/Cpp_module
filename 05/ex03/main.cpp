#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm *form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm *form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm *form3 = someRandomIntern.makeForm("presidential pardon", "John Doe");

    Bureaucrat boss("Boss", 1);
    if (form1) {
        boss.signForm(*form1);
        boss.executeForm(*form1);
    }
    if (form2) {
        boss.signForm(*form2);
        boss.executeForm(*form2);
    }
    if (form3) {
        boss.signForm(*form3);
        boss.executeForm(*form3);
    }

    delete form1;
    delete form2;
    delete form3;
    return 0;
}
