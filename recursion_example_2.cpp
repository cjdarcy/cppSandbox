#include <iostream>
using namespace std;

void nLines(int n) {
    if (n > 0) {
        cout << endl;
        nLines(n-1);
    }
}

int main() {
    nLines(5);
    return 0;
}
