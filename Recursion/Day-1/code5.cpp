#include <iostream>
using namespace std;

int FibonacciSeries(int NumberOfTerm)
{

    if (NumberOfTerm == 0 or NumberOfTerm == 1)
        return NumberOfTerm;

    return FibonacciSeries(NumberOfTerm - 1) + FibonacciSeries(NumberOfTerm - 2);
}

int main()
{
    int number;
    cout << "Enter the nth number of FibonacciSeries: ";
    cin >> number ;

    cout << FibonacciSeries(number) << endl;
    return 0;
}