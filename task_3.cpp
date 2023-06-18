
#include "lib.h"


int sumRange(int a, int b) {

    if (a == b) {
        return a;
    }

    else {
        return a + sumRange(a + 1, b);
    }
}

int main() {
    int a, b;
    cout << "Enter the lower bound of the range: ";
    cin >> a;
    cout << "Enter the upper bound of the range: ";
    cin >> b;
    cout << "The sum of all numbers in the range from " << a << " to " << b << " is " << sumRange(a, b) << endl;
    return 0;
}
