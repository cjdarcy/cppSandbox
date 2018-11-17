#include <iostream>
#include <cmath>
using namespace std;

/* translating distance between two points
(x1, y1) and (x2, y2) into C++ */

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = pow(dx, 2) + pow(dy, 2);
    double result = sqrt(dsquared);
    return result;
}

int main () {
    double dist = distance(1.0, 2.0, 4.0, 6.0);
    cout << dist << endl;
}
