// IMPORTANT FOR INTERVIEW
#include <iostream>
using namespace std;

int main()
{
    // 1st method (BY SWAP FUNCTION)
    int a = 5, b = 9;
    swap(a, b);
    // a = 9 && b = 5
    cout << a << " " << b << endl;

    // 2nd method (BY TEMO VARIABLE)
    int c = 5, d = 7;
    int temp = c;
    // temp has 5
    c = d;
    // c has 7
    d = temp;
    // here d has 5
    cout << c << " " << d << endl;

    // 3rd method (ARITHMETIC METHOD)
    int x = 15, y = 7;
    x = x + y;
    // X = 12
    y = x - y;
    // y = 5
    x = x - y;
    // x = 7
    cout << x << " " << y << endl;

    // 4rth (XOR METHOD)

    int i = 1, j = 20;
    i = i ^ j;
    j = j ^ i;
    i = i ^ j;

    cout << i << " " << j << endl;
    return 0;
}