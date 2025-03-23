#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        Array<int> arr(5);
        std::cout << "Array size: " << arr.size() << std::endl;
        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }

        Array<int> copyArr(arr);
        std::cout << "Copy array size: " << copyArr.size() << std::endl;

        arr[0] = 42;
        std::cout << "Modified arr[0]: " << arr[0] << std::endl;
        std::cout << "CopyArr[0]: " << copyArr[0] << std::endl;

        std::cout << arr[10] << std::endl;
    } 
    catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
