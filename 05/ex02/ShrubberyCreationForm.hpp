#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"


#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
public:
    // Orthodox Canonical Form
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    // Override execute function
    void execute(Bureaucrat const& executor) const override;

private:
    std::string target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
