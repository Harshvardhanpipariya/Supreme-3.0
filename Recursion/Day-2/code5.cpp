// Print All odd Number
#include <iostream>
using namespace std;

void PrintAllOdd(int *n, int size, int index)
{
    if (size == index)
    {
        return;
    }

    if (n[index] & 1)
    {
        cout << "Odd number at " << index << " " << n[index] << endl;
    }

    PrintAllOdd(n, size, ++index);
}

int main()
{
    int n[5];
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    PrintAllOdd(n, 5, 0);
    return 0;
}