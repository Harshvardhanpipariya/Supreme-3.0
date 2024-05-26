#include <iostream>
using namespace std;

int powerLoop(int digit, int power)
{
    int ans = digit;
    for (int i = 0; i < power; i++)
    {
        ans = ans * digit;
    }

    return ans;
}
int main()
{
    int input,power;
    cout << "Enter a number : ";
    cin >> input;
    cout << "Enter a power : ";
    cin>>power;


    cout<<power<<" Power of "<<input<<" is "<<powerLoop(input,power);

    return 0;
}