#include <iostream>

int main () {
    int fred = 5;
    std::cout << fred;
    fred = 7;
    std::cout << fred << std::endl;
    int a = 5;
    int b = a; // a and b are now equal
    a = 3;  // a and b are no longer equal
}
