#include <iostream>
using namespace std;

void CountZeroAndOne(bool *arr, int size)
{
    int Zero = 0;
    int One = 0;

    for (int i = 0; i < size; i++)
    {
        arr[i] ? One++ : Zero++;
    }

    cout << "Number of Zero's in Array is " << Zero << endl;
    cout << "Number of One's in Array is " << One << endl;
}

int main()
{

    bool arr[5];

    cout << "Enter bool value only" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> arr[i];
    }

    CountZeroAndOne(arr, 5);

    return 0;
}