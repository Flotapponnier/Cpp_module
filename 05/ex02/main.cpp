#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Create Bureaucrats with different grades
        Bureaucrat john("John", 5);     // High-grade bureaucrat
        Bureaucrat jane("Jane", 30);    // Medium-grade bureaucrat
        Bureaucrat bob("Bob", 150);     // Low-grade bureaucrat
		Bureaucrat jack("Jack", 75);

        // Create Forms with targets
        ShrubberyCreationForm shrubForm("home");
        RobotomyRequestForm robotForm("target");
        PresidentialPardonForm pardonForm("Alice");

        // Bureaucrats trying to sign the forms
        std::cout << "\nAttempting to sign forms:\n";
        john.signForm(shrubForm);
        john.signForm(robotForm);
        john.signForm(pardonForm);

        jane.signForm(shrubForm); // Should fail (grade too low)
        bob.signForm(robotForm);  // Should fail (grade too low)
		jack.signForm(shrubForm);

        // Bureaucrats executing the forms
        std::cout << "\nAttempting to execute forms:\n";
        john.executeForm(shrubForm);
        john.executeForm(robotForm);
        john.executeForm(pardonForm);

        jane.executeForm(shrubForm); // Should fail (form not signed)
        bob.executeForm(robotForm);  // Should fail (grade too low)
		jack.executeForm(shrubForm);
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
