#include <iostream>
#include <cmath>
using namespace std;

double area(double radius) {
    return acos(-1.0) * radius * radius;
}

double absoluteValue(double x) {
    if (x < 0) {
        return -x;
    } else if (x > 0) {
        return x;
    } else if (x == 0) {
        return 0;
    }
}
