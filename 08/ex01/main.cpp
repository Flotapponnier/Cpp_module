#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main() {
    try {
        Span test(5);
        test.add_number(6);
        test.add_number(3);
        test.add_number(17);
        test.add_number(9);
        test.add_number(11);

        std::cout << "Shortest span: " << test.find_shortest_span() << std::endl;
        std::cout << "Longest span: " << test.find_longest_span() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Span big_test(10000);
        std::vector<int> random_numbers(10000);
        
        std::srand(std::time(nullptr));
        for (int& num : random_numbers) {
            num = std::rand() % 100000;
        }

        big_test.add_range(random_numbers.begin(), random_numbers.end());

        std::cout << "Big test - Shortest span: " << big_test.find_shortest_span() << std::endl;
        std::cout << "Big test - Longest span: " << big_test.find_longest_span() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error in big test: " << e.what() << std::endl;
    }

    try {
        Span overflow_test(2);
        overflow_test.add_number(5);
        overflow_test.add_number(10);
        overflow_test.add_number(15);
    } catch (const std::exception& e) {
        std::cout << "Overflow test - Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
