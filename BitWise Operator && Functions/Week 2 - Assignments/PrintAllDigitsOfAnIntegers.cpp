#include <iostream>
using namespace std;

void PrintAllDigitsOfAnInteger(int number)
{

    while (number)
    {
        int digit = number % 10;
        cout << digit << endl;
        number = number/10;
    }
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    PrintAllDigitsOfAnInteger(input);

    return 0;
}