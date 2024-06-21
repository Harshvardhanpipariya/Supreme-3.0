#include <bits/stdc++.h>
using namespace std;

int SetKBit(int number, int k)
{
    int mask = 1 << k;
    int ans = number | mask;
    return ans;
}

int main()
{
    int input, k;
    cout << "Enter input : ";
    cin >> input;

    cout << "Enter k : ";
    cin >> k;
    cout << SetKBit(input, k);

    return 0;
}