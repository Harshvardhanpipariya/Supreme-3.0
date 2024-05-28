#include <iostream>
using namespace std;

void ExtremePrint(int *arr, int size1)
{
    int size = size1 - 1;
    for (int i = 0; i <= size / 2; i++)
    {

        if (&arr[i] == &arr[size - i])
        {
            cout << "case " << i << endl;
            cout << arr[i] << endl;
        }
        else
        {
            cout << "case " << i << endl;
            cout << arr[i] << " " << arr[size - i] << endl;
        }
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

    ExtremePrint(array, input);

    return 0;
}