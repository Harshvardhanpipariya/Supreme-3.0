// n = 1 to 9
#include <iostream>
using namespace std;

void CheckPrime(int number)
{
    for (int i = 2; i <number; i++)
    {
        if((number%i)==0)
        {
            cout<<"Non Prime number"<<endl;
            return;
        }
    }

    cout<<"Prime number"<<endl;
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;
    CheckPrime(input);

    return 0;
}