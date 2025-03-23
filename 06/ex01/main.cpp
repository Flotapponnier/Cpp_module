#include <iostream>
#include "Serializer.hpp"

int main() {
    // Create a Data object
    Data data;
    data.id = 42;
    data.name = "Test Data";
    data.value = 3.14f;

    // Serialize
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized uintptr_t: " << raw << std::endl;

    // Deserialize
    Data* deserializedData = Serializer::deserialize(raw);

    // Verify that the deserialized pointer is the same as the original
    std::cout << "Deserialized Data Address: " << deserializedData << std::endl;
    std::cout << "Original Data Address: " << &data << std::endl;

    if (deserializedData == &data) {
        std::cout << "Serialization and Deserialization Successful!" << std::endl;
    } else {
        std::cout << "Serialization and Deserialization Failed!" << std::endl;
    }

    // Print data members to verify integrity
    std::cout << "Deserialized Data -> id: " << deserializedData->id
              << ", name: " << deserializedData->name
              << ", value: " << deserializedData->value << std::endl;

    return 0;
}
