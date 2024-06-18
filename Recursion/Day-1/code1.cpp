#include <iostream>
using namespace std;

int getFactorial(int n)
{

    if (n == 0 or n == 1)
        return 1;

    return n * getFactorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << getFactorial(n) << endl;
    return 0;
}