#include <iostream>
#include <cstdint>

int main() {
    double x[9] = {};
    double *d = &x[4];
    std::cout << reinterpret_cast<std::uintptr_t>(d + 4)
                 - reinterpret_cast<std::uintptr_t>(d - 4) << '\n';
}
