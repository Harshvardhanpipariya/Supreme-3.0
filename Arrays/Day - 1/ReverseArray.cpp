#include <iostream>
using namespace std;

void ReverseArray(int *arr, int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
    }
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

    ReverseArray(array, input);

    for (int i = 0; i < input; i++)
    {
        cout << array[i] << " ";
    }
}