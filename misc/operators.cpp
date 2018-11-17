#include <iostream>
using namespace std;

int main () {
    int hour, minute;
    hour = 11;
    minute = 59;
    cout << "Number of minutes since midnight: ";
    cout << hour*60 + minute << endl;
    cout << "Fraction fo the hour that has passed: ";
    cout << minute/60 << endl;
    cout << "Percentage of the hour that has passed: ";
    cout << minute*100/60 << endl;
}
