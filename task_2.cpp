
#include "lib.h"

void printAsterisks(int M) {

    if (M == 0) {
        return;
    }

    else {
        cout << "*";
        printAsterisks(M - 1);
    }
}

int print() {
    int M;
    cout << "Enter the number of asterisks to print: ";
    cin >> M;
    cout << "The output is: " << endl; cout << "\t" << endl;
    printAsterisks(M);
    cout << endl;
    return 0;
}
