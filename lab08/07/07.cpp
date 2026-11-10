#include <iostream>

int main() {
    int x;
    bool found = false;

    while (std::cin >> x) {
        if (x < 0) {
            std::cout << x << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Отрицательных чисел нет\n";
    }
}
