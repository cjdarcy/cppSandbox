#include <iostream>
#include <cmath>
using namespace std;

void printLogarithm(double x) {
    if (x <= 0.0) {
        cout << "Positive numbers only, please." << endl;
        return;
    }

    double result = log(x);
    cout << "The log of x is " << result << endl;
}

int main () {
    int x = 2;
    printLogarithm(x);
    return 0;
}
