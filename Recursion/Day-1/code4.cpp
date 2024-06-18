#include <iostream>
using namespace std;

int powFunction(int number, int power)
{

    if (power == 0)
        return 1;


    return number * powFunction(number, power - 1);
}

int main()
{
    int number, power;
    cout << "Enter the value of number & Power: ";
    cin >> number >> power;

    cout<<powFunction(number,power)<<endl;
    return 0;
}