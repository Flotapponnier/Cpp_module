
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
    private:
        std::string _input;
        int         _int;
        char        _char;
        float       _float;
        double      _double;
        bool        _valid;
        bool        _special;
        bool        _noChar;
    
        ScalarConverter();
        static bool isSpecialCase(const std::string &input);
        static bool charDisplayable(char charValue);

    public:
        // Constructors & Destructor
        explicit ScalarConverter(const std::string &input);
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

        // Methods
        void checkInput();
        void convert() const;
};

#endif // SCALARCONVERTER_HPP
