#include <iostream>

int main() {
    int a[2] = {1, 2}, &x = a[0], &y = a[1];
    int *p = &y, *q = &x;

    if (p < q)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}
