#include <iostream>
using namespace std;

bool primeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return true;
    }

    return false;
}

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;


    primeNumber(input)?cout<<input<<" Is a not a Prime number"<<endl:cout<<input<<" Is a Prime number"<<endl;;

    return 0;
}