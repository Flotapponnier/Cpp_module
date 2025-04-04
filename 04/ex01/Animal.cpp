#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "[Animal] Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << "[Animal] Assignment operator called" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "[Animal] Destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
