// Max Number
#include <iostream>
#include <limits.h>
using namespace std;



int maximum = INT_MIN;  //global variable banana bad practice

int MaxNumber(int *n, int size, int index)
{
    if (size == index)
    {
        return 0;
    }

    if (maximum < n[index])
    {
        maximum = n[index];
    }

    MaxNumber(n, size, ++index);

    return maximum;
}

int main()
{
    int n[5];
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Max Element is : " << MaxNumber(n, 5, 0) << endl;
    return 0;
}