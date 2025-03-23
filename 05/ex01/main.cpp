#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat john("John", 5);
        Bureaucrat jane("Jane", 20);

        Form formA("Form A", 10, 30);

        john.signForm(formA);
        jane.signForm(formA);
        Form formB("Form B", 0, 30);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
