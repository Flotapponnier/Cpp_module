#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>

Base *generate() {
    int randValue = std::rand() % 3;
    switch (randValue) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return nullptr;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::bad_cast&) {}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::bad_cast&) {}
    
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::bad_cast&) {}
    
    std::cout << "Unknown type" << std::endl;
}

void testIdentification(int iterations) {
    for (int j = 0; j < iterations; j++) {
        Base* obj = generate();
        if (!obj) {
            std::cerr << "Failed to generate object." << std::endl;
            return;
        }
        identify(obj);
        identify(*obj);
        delete obj;
        std::cout << std::endl;
    }
}

int main() {
    std::srand(std::time(nullptr));
    testIdentification(5);
    return 0;
}
