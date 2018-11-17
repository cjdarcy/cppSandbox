#include <iostream>
#include <cmath>

int main () {
    double x = 1.0;
    while (x < 100.0) {
        std::cout << x << "\t" << log(x) / log(2.0) << "\n";
        x = x * 2.0;
    }
}
