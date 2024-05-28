#include <iostream>
#include <limits.h>
using namespace std;

int MinElement(int *arr, int size)
{
    int max = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (max > arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int input;

    cout << "Enter number for Array size : ";
    cin >> input;

    int *array = new int[input];

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "]" << endl;
        cin >> array[i];
    }

    cout << "Minimum Element is " << MinElement(array, input) << endl;
}