#include <iostream>
using namespace std;

int countAllSetBits(int number)
{

    int ans = 0;
    while (number > 0)
    {
        if (number & 1)
        {
            ans++;
        }

        number = number >> 1;
    }
    return ans;
}

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;

    cout << countAllSetBits(input) << endl;

    return 0;
}