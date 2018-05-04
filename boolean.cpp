#include <iostream>
#include <cmath>
using namespace std;

void testBool () {
  int n = 2;
  int x = 1;
  bool fred = true;
  bool testResult = false;
  bool evenFlag = (n % 2 == 0); // true if n is even
  bool positiveFlag = (x > 0); // true if x is positiveFlag
  if (evenFlag && n % 2 == 0) { // "flag" for the presence or absence of some condition
    cout << "Value 'n' must be even!" << endl;
  }
}

bool isSingleDigit (int x) {
  if (x >= 0 && x < 10) {
    return true;
  } else {
    return false;
  }
}

/* the above f(x) can also be the following one-liner:
return (x >= 0 && x < 10); */

int main () {
  int x = 5;
  if (x == 5) { // the "==" operator returns a boolean value
    cout << "X is equal to 5!" << endl;
  }
  testBool();
  cout << isSingleDigit(2) << endl; // outputs 1 (in C++, '1' = 'true' and '0' = 'false')
  bool bigFlag = !isSingleDigit(17); // assigns 'false' to 'bigFlag' var, no output
  return 0;
}

/* example while:
while (true) {
  // loop forever
} this will loop forever until encountering "return" or "break"! */

/* boolean flags:
&& = "AND"
|| = "OR"
! = "NOT" <- inverts a bool expression */