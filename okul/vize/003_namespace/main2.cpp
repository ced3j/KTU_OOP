#include <iostream>
int value = 100; // Global değişken

namespace Example {
    int value = 200; // Namespace içindeki değişken
}

int main() {
    int value = 300; // Local değişken

    std::cout << "Local value: " << value << std::endl;
    std::cout << "Namespace value: " << Example::value << std::endl;
    std::cout << "Global value: " << ::value << std::endl;

    return 0;
}