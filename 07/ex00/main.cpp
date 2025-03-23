#include "Whatever.hpp"

int main() {
    // Integer test
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    Swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    std::cout << "Min(5, 10) = " << Min(5, 10) << std::endl;
    std::cout << "Max(5, 10) = " << Max(5, 10) << std::endl;

    // Double test
    double a = 3.14, b = 2.71;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    Swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "Min(3.14, 2.71) = " << Min(a, b) << std::endl;
    std::cout << "Max(3.14, 2.71) = " << Max(a, b) << std::endl;

    // Character test
    char c1 = 'A', c2 = 'Z';
    std::cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    Swap(c1, c2);
    std::cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "Min(A, Z) = " << Min(c1, c2) << std::endl;
    std::cout << "Max(A, Z) = " << Max(c1, c2) << std::endl;

    // String test
    std::string s1 = "Hello", s2 = "World";
    std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    Swap(s1, s2);
    std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "Min(Hello, World) = " << Min(s1, s2) << std::endl;
    std::cout << "Max(Hello, World) = " << Max(s1, s2) << std::endl;

    return 0;
}
