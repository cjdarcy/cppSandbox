#include <iostream>
#include <cmath>
using namespace std;

/* composition: what if someone gave you two points, the center
of the circle and a point on the perimeter, and asked for the area
of the circle? */

double distance (double x1, double y1, double x2, double y2) {
    double dx = x2 - x2;
    double dy = y2 - y1;
    double dsquared = pow (dx, 2) + pow (dy, 2);
    double result = sqrt (dsquared);
    return result;
}

double area (double radius) {
    return acos(-1.0) * radius * radius;
}

// double radius = distance (xc, yc, xp, yp); <- distance between two points = radius!

/* then to find the area of a circle with that radius value:
double result = area (radius);
return result; */

double fred (double xc, double yc, double xp, double yp) {
    return area (distance (xc, yc, xp, yp));
}

int main () {
    double fredout = fred(1.0, 2.0, 4.0, 6.0);
    cout << fredout << endl;
}
