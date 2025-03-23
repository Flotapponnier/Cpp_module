#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{

}

Harl::~Harl(){

}


void Harl::complain(std::string level)
{
    typedef void (Harl::*Harlptr)();
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Harlptr functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "[ UNKNOWN ] Invalid complaint level\n";
}

void Harl::debug(){
	std::cout << "Debug message\n";
}

void Harl::info(){
	std::cout << "Info message\n";
}

void Harl::warning(){
	std::cout << "Warning message\n";
}

void Harl::error(){
	std::cerr << "Error message\n";
}
