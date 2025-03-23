#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    brain = new Brain();
    std::cout << "[Dog] Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "[Dog] Copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
    type = other.type;
}

Dog& Dog::operator=(const Dog &other) {
    std::cout << "[Dog] Assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "[Dog] Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Wouf Wouf" << std::endl;
}
