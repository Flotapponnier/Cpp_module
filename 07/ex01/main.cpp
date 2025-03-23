#include "iter.hpp"
#include <iostream>

void printElement(int x) {
    std::cout << x << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, printElement);  // Will print 1, 2, 3, 4, 5
    return 0;
}
