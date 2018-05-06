#include <iostream>

/* note: different functions can have parameters with the same name,
just like local variables. */

void printMultiples (int n, int high) {
    int i = 1;
    while (i <= high) {
        std::cout << n * i << "\t";
        i++;
    }
    std::cout << "\n";
}

void printMultiTables (int high) {
    int i = 1;
    while (i <= high) {
        printMultiples(i, high); // printMultiples(i, i); would create an asymm table
        i++;
    }
}

int main () {
    printMultiTables(7);
}
