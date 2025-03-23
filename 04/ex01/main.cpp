#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int numAnimals = 6;
    Animal* animals[numAnimals];

    std::cout << "\n--- Creating Animal Array (half Dogs, half Cats) ---" << std::endl;
    for (int i = 0; i < numAnimals; i++) {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    std::cout << "\n--- Testing makeSound() for all Animals ---" << std::endl;
    for (int i = 0; i < numAnimals; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n--- Deleting Animal Array ---" << std::endl;
    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }
    
    std::cout << "\n--- Testing Deep Copy ---" << std::endl;
    {
        Dog dog1;
        Dog dog2 = dog1;
    }
    {
        Cat cat1;
        Cat cat2;
        cat2 = cat1;
    }
    return 0;
}
