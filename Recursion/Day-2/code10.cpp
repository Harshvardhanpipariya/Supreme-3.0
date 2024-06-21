// return digits
// h.w. (ARRAY IS SORTED OR NOT)
#include <iostream>
using namespace std;

void returnDigits(int number)
{
    if (number == 0)
    {
        return;
    }

    int digit = number % 10;
    number = number / 10;
    returnDigits(number);

    cout << "Digits are: " << digit << endl;
}

int main()
{

    int number;
    cout << "Enter the number: ";

    cin >> number;

    returnDigits(number);

    return 0;
}