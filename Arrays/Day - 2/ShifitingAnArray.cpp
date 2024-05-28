// IMPORTANT 
#include <iostream>
using namespace std;

void ShifitingAnArray(int *arr, int size, int shift)
{
    int finalShift = shift % size;

    if (finalShift == 0)
    {
        return;
    }
    // step 1: copy last finalShift elements into a temp array
    int temp[1000];
    int index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }

    // step 2: shift array elements by finalShift places

    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - finalShift];
    }

    // step 3: shift array elements by final shift places
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int input, shift;

    cout << "Enter number for Array size : ";
    cin >> input;

    int *array = new int[input];

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "]" << endl;
        cin >> array[i];
    }

    cout << "Enter shift ";
    cin >> shift;

    ShifitingAnArray(array, input, shift);

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "] " <<array[i]<< endl;
        
    }
    return 0;
}