// Min Number
#include <iostream>
#include <limits.h>
using namespace std;



int minimum = INT_MAX; //global variable banana bad practice

int MinNumber(int *n, int size, int index)
{
    if (size == index)
    {
        return 0;
    }

    if (minimum > n[index])
    {
        minimum = n[index];
    }

    MinNumber(n, size, ++index);

    return minimum;
}

int main()
{
    int n[5];
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Min Element is : " << MinNumber(n, 5, 0) << endl;
    return 0;
}