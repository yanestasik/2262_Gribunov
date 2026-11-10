#include <iostream>

int main() {
    int to = 4;
    for (int i = 0; i < to; ++i) {
        std::cout << i << ' ';
        to = 2;
    }
    std::cout << '\n';

    to = 4;
    int counter = 0, end = to;
    for (const int &i = counter; i < end; ++counter) {
        std::cout << i << ' ';
        to = 2;
    }
    std::cout << '\n';
}
