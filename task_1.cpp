
#include "lib.h"

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int power_main() {
    int base, exponent;
    cout << "Raised to:";
    cin >> exponent;

    cout << "Power of:";
    cin >> base;

    cout << "The power of " << base << " raised to " << exponent << " is " << power(base, exponent) << endl;
    return 0;
}
