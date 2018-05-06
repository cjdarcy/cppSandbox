#include <iostream>

int countdown (int n) {
    while (n > 0) {
    std::cout << n << std::endl;
    n = n - 1;
    }
    std::cout << "Blastoff!" << std::endl;
    return 0;
}

void sequence (int n) {
    while (n != 1) {
        std::cout << n << std::endl;
        if ( n % 2 == 0) {  // n is even
            n = n / 2;
        } else {    // n is odd
          n = n * 3 + 1;
        }
    }
} // will eventually terminate if even. not always, if odd

int main () {
    countdown(10);
    sequence(4);
    sequence(3);
}
