#include <iostream>
using namespace std;

int createNumberusingDigit(int number)
{

    int num = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter digit: " << endl;
        int digit;
        cin >> digit;
        num = num * 10 + digit;
    }

    return num;
}

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;

    cout << createNumberusingDigit(input) << endl;

    return 0;
}