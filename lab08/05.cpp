#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int &x : a) {
        std::cin >> x;
    }

    int last = a.back();
    int positive = 0, negative = 0;
    for (int &x : a) {
        x += last;
        if (x > 0) {
            ++positive;
        } else if (x < 0) {
            ++negative;
        }
    }

    std::cout << positive << ' ' << negative << '\n';
}
