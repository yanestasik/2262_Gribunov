#include <iostream>

int main() {
    int x = 6, y = 3;
    int *p = &x;
    int &a = x;

    std::cout << x * y << '\n';
    std::cout << *p << '\n';
    std::cout << (x & y) << '\n';

    a = 10;
    std::cout << x << '\n';
}
