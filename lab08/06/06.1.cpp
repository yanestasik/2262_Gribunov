#include <iostream>

int main() {
    for (int i = 0; i < 3; ++i) {
        ++i;
        std::cout << i << ' ';
    }
    std::cout << '\n';

    int counter = 0, end = 3;
    for (const int &i = counter; i < end; ++counter) {
        // ++i;  // Если убрать комментарий, программа не соберётся.
        std::cout << i << ' ';
    }
    std::cout << '\n';
}
