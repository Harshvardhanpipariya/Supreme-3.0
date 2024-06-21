#include <iostream>
using namespace std;


// the babbar way
void printArrayRecursion(int *n, int size, int index)
{

    if ((size) == index)
    {
        return;
    }

    cout <<"Printing Element at "<<index<<" "<< n[index] << endl;
    printArrayRecursion(n, size, ++index);
}

// my code 
void printArrayRecursion1(int *n, int size1)
{

    if ((size1) <= 0)
    {
        return;
    }

    printArrayRecursion1(n, --size1);
    cout <<"Printing Element at "<<size1<<" "<< n[size1] << endl;
}

int main()
{
    int n[5];
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    // printArrayRecursion(n, 5, 0);
    printArrayRecursion1(n,5);
    return 0;
}