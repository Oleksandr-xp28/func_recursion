// func_recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int beg, int end, int _sum = 0)
{
    if (beg <= end)
    {
        cout << "iter: " << beg - 1 << "\tvalue: " << beg << endl;
        return beg + sum(beg + 1, end, _sum);
    }
    else
    {
        cout << "Sum = " << _sum << endl;
        return _sum;
    }
}

int main()
{
    int start_value, end_value;

    cout << "Enter the starting value: ";
    cin >> start_value;

    cout << "Enter the ending value: ";
    cin >> end_value;

    int result = sum(start_value, end_value);

    cout << "The sum of numbers from " << start_value << " to " << end_value << " is: " << result << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu