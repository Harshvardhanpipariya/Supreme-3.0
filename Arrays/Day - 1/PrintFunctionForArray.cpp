#include <iostream>
using namespace std;

void PrintFunction(int *arr, int size)
{
    cout << "Printing All elements" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int array[5] = {1, 2, 3, 4, 5};

    PrintFunction(array, 5);

    return 0;
}