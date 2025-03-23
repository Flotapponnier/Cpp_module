#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "=== Testing Correct Animal Classes ===" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;
    
    std::cout << "\n--- Sound Tests ---" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << "\n--- Deleting Correct Animal Objects ---" << std::endl;
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n=== Testing WrongAnimal Classes ===" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "Type of wrongMeta: " << wrongMeta->getType() << std::endl;
    std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;
    
    std::cout << "\n--- Sound Tests ---" << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();
    std::cout << "\n--- Deleting WrongAnimal Objects ---" << std::endl;
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}
