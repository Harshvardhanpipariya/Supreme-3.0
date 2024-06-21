#include <bits/stdc++.h>
using namespace std;

int ReverseAnInteger(int x)
{
    // int ans = 0;

    // while (number)
    // {
    //     int digit = number % 10;
    //     ans = (10 * ans) + digit;
    //     number = number / 10;
    // }

    // cout<< ans<<endl;

    int r = 0; // decleare r
    while (x)
    {
        if (r > INT_MAX / 10 || r < INT_MIN / 10)
            return 0;        // check 32 bit range if r is outside the range then
                             // return 0
        r = r * 10 + x % 10; // find remainder and add its to r
        x = x / 10;          // Update the value of x
    }
    cout << r << endl; // if r in the 32 bit range then return r
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    cout<<ReverseAnInteger(input);

    return 0;
}