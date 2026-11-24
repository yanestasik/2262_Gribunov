#include <iostream>
#include <cstdint>

int main() {
    double x[10];
    for (int i = 0; i < 10; i++) {
        std::cout << reinterpret_cast<std::uintptr_t>(&x[i]) << '\n';
    }
    std::cout << "Step: " << sizeof(double) << '\n';
}
