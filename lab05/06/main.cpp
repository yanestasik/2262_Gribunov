#include <cmath>
#include <iostream>

int main() {
    int n = 1024;
    double s = std::pow(2.0, n);
    std::cout << std::fixed << s << std::endl;
    return 0;
}