
#include "Cat.hpp"

#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain();
    std::cout << "[Cat] Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "[Cat] Copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
    type = other.type;
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "[Cat] Assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "[Cat] Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Miaou" << std::endl;
}
