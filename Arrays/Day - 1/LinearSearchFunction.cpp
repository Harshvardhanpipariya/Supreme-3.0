#include <iostream>
using namespace std;

bool LinearSearch(int *arr, int target, int size)
{
    for (int i = 0; i < 5; i++)
    {

        if (target == arr[i])
        {
            return 1;
        }
    }

    return 0;
}

void PrintFunction(int *arr, int size)
{
    cout << "Printing All elements" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> array[i];
    }

    int target;
    cout << "Enter target Element" << endl;
    cin >> target;

    PrintFunction(array, 5);

    if (LinearSearch(array, target, 5))
    {

        cout << "target found ";
    }
    else
    {

        cout << "target not found ";
    }

    return 0;
}