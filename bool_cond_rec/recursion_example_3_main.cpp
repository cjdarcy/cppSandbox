#include <iostream>
#include <cmath>
using namespace std;

/* notes on main(): main is supposed to return an integer. that is why
'int main ()' is used. the usual return value is 0, indicating that the
program succeeded in execution. if the return value is -1 or some other
value, it is likely that an error occurred.

when a system executes a program, it starts by calling main(). the value
is returned to the system. */

// factorials: n! = n * (n - 1)!
// a good example of a recursive function
int factorial (int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial (n - 1);
  }
}

// fibonacci method, another recursive function
int fibonacci (int n) {
  if (n == 0 || n == 1) {
  return 1;
  } else {
    return fibonacci (n-1) + fibonacci (n-2);
  }
}

int main() {
  cout << factorial(6) << endl; // returns 6!, which is '720'
  cout << fibonacci(10) << endl; // returns '89'
  return 0;
}