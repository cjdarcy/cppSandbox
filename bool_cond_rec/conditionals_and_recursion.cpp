#include <iostream>
using namespace std;

void printParity(int x) {
    if(x%2 == 0) {
        cout << "x is even" << endl;
    } else {
        cout << "x is odd" << endl;
    }
}

int main () {
    int quotient = 7/3;
    int remainder = 7/3;
    int x = 1;
    if(x>0) {
        cout << "x is positive" << endl;
    }
    if(x%2 == 0) {
        cout << "x is even" << endl;
    } else {
        cout << "x is odd" << endl;
    }
    printParity(17);
// x == y | x equals y
// x != y | x is not equal to y
// x > y | x is greater than y
// x < y | x is less than y
// x >= y | x is greater than or equal to y
// x<= y | x is less than or equal to y    
    if(x == 0) {
        cout << "x is zero" << endl;
    } else {
        if(x > 0) {
            cout << "x is positive" << endl;
        } else {
            cout << "x is negative" << endl;
        }
    }
}
