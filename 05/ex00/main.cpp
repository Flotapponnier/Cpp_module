#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 5);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

        // Try to set grade to an invalid value
        Bureaucrat invalidBureaucrat("Invalid", 200);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
