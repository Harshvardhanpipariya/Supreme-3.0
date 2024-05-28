#include <iostream>
using namespace std;

void PrintAllPairs(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
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

    PrintAllPairs(array, input);

    return 0;
}