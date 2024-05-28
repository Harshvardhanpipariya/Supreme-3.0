#include <iostream>
using namespace std;

// 1st method (COUNTING (O(N))
// 2nd method (SORTING O(N LOGN))
// 3rd method (2 Pointer)

void SortZerosAndOnces(bool *arr, int size)
{
    int onces = 0;
    int zeros = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            onces++;
        }
        else
        {
            zeros++;
        }
    }

    // for (int j = 0; j < size; j++)
    // {
    //     if (onces)
    //     {
    //         arr[j] = 0;
    //         onces--;
    //     }
    //     else
    //     {
    //         arr[j] = 1;
    //     }
    // }
    fill(arr, arr + zeros, 0);
    fill(arr + zeros, arr + size, 1);
}
int main()
{
    int input;

    cout << "Enter number for Array size : ";
    cin >> input;

    bool *array = new bool[input];

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "]" << endl;
        cin >> array[i];
    }

    SortZerosAndOnces(array, input);

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "] " << array[i] << endl;
    }

    return 0;
}