
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "lib.h"

void findMinSum(int arr[], int size, int pos, int& minPos, int& minSum) {

    if (pos == size - 9) {
        return;
    }

    else {

        int sum = 0;
        for (int i = pos; i < pos + 10; i++) {
            sum += arr[i];
        }

        if (sum < minSum) {

            minPos = pos;
            minSum = sum;
        }

        findMinSum(arr, size, pos + 1, minPos, minSum);
    }
}

int main() {

    srand(time(0)); 
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100 + 1; 
    }

    cout << "The array is: " << endl;
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minPos = 0;
    int minSum = INT_MAX; // The maximum possible value for an int

    findMinSum(arr, 100, 0, minPos, minSum);

    cout << "The position where the sequence of 10 numbers begins, "
        << "the sum of which is minimal is: " << minPos << endl;
    cout << "The minimum sum is: " << minSum << endl;

    return 0;
}

