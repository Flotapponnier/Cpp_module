

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter(const std::string &input) : _input(input), _valid(false), _special(false), _noChar(false) {
    checkInput();
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {*this = other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
    if (this != &other) {
        _input = other._input;
        _int = other._int;
        _char = other._char;
        _float = other._float;
        _double = other._double;
        _valid = other._valid;
        _special = other._special;
        _noChar = other._noChar;
    }
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::checkInput() {
    _special = isSpecialCase(_input);
    
    if (_special) {
        _valid = true;
        _char = 0;
        if (_input == "nan" || _input == "nanf") {
            _float = std::numeric_limits<float>::quiet_NaN();
            _double = std::numeric_limits<double>::quiet_NaN();
        } else if (_input == "inff" || _input == "+inff" || _input == "-inff") {
            _float = std::numeric_limits<float>::infinity();
            _double = std::numeric_limits<double>::infinity();
        } else if (_input == "inf" || _input == "+inf" || _input == "-inf") {
            _float = std::numeric_limits<float>::infinity();
            _double = std::numeric_limits<double>::infinity();
        }
        _int = std::numeric_limits<int>::min();
        return;
    }
    if (_input.length() == 1 && std::isprint(_input[0]) && !std::isdigit(_input[0])) {
        _char = _input[0];
        _int = static_cast<int>(_char);
        _float = static_cast<float>(_char);
        _double = static_cast<double>(_char);
        _valid = true;
        _special = false;
        _noChar = false;
        return;
    }
    try {
        _double = std::stod(_input);
        _int = static_cast<int>(_double);
        _float = static_cast<float>(_double);
        _char = static_cast<char>(_int);
        _valid = true;
    } catch (...) {
        _valid = false;
    }
    _noChar = (_int < 0 || _int > 127);
}

bool ScalarConverter::isSpecialCase(const std::string &input) {
    return (input == "-inf" || input == "+inf" || input == "nan" || input == "-inff" || input == "+inff" || input == "nanf" || input == "inf" || input =="inff");
}

bool ScalarConverter::charDisplayable(char charValue) {
    return (charValue >= 32 && charValue <= 126);
}

void ScalarConverter::convert() const {
    std::cout << "char: ";
    if (!_valid || _int < 0 || _int > 127)
        std::cout << "impossible";
    else if (charDisplayable(_char))
        std::cout << "'" << _char << "'";
    else
        std::cout << "Non displayable";
    std::cout << std::endl;

    std::cout << "int: ";
    if (_special || !_valid || _int < std::numeric_limits<int>::min() || _int > std::numeric_limits<int>::max()) {
        std::cout << "impossible";
    } else {
        std::cout << _int;
    }
    std::cout << std::endl;

    std::cout << "float: ";
    if (_special && (_input == "nan" || _input == "nanf"))
        std::cout << "nanf";
    else if (_valid) {
        std::cout << std::fixed << std::setprecision(1) << _float << "f";
    } else {
        std::cout << "impossible";
    }
    std::cout << std::endl;

    std::cout << "double: ";
    if (_special && (_input == "nan" || _input == "nanf"))
        std::cout << "nan";
    else if (_valid) {
        std::cout << std::fixed << std::setprecision(1) << _double;
    } else {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}
