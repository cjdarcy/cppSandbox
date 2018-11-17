#include <iostream>
using namespace std;

void extractChar () {
    string fruit = "banana";
    char letter = fruit[0]; // note the 0-index!
    cout << letter << "\n";
    int length = fruit.length();
    cout << length  << "\n"; // returns 6
    char last = fruit[length-1];
    cout << last << "\n"; // returns 5
}

int main () {
    string first;
    first = "Hello, ";
    string second = "world.";
    cout << first + second << "\n";
    extractChar ();
}
