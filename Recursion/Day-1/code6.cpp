#include <iostream>
using namespace std;

int GetSum(int Number)
{

    if (Number == 0 or Number == 1)
        return Number;

    return Number + GetSum(Number - 1);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number ;

    cout << GetSum(number) << endl;
    return 0;
}