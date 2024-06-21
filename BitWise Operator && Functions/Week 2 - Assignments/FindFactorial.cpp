#include <iostream>
using namespace std;

void FindFactorial(int number)
{
    int ans = 1;
    for (int i = number; i > 0; i--)
    {
        ans = ans * i;
    }

    cout << ans;
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    FindFactorial(input);

    return 0;
}