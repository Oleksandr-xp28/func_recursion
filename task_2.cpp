#include <iostream>
using namespace std;

void printAsterisks(int M) {

    if (M == 0) {
        return;
    }

    else {
        cout << "*";
        printAsterisks(M - 1);
    }
}

int main() {
    int M;
    cout << "Enter the number of asterisks to print: ";
    cin >> M;
    cout << "The output is: ";
    printAsterisks(M);
    cout << endl;
    return 0;
}
