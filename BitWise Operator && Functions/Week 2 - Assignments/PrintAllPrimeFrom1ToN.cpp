#include <iostream>
using namespace std;

bool CheckPrime(int number)
{
    for (int i = 2; i <number; i++)
    {
        if((number%i)==0)
        {
            
            return 0;
        }
    }

    return 1;
}

void PrintAllPrimeFrom1ToN(int number)
{

    for (int i = 1; i <= number; i++)
    {
        int isPrime = CheckPrime(i);
      
        if (isPrime)
        {
            cout<<i<<" this all are prime number"<<endl;
        }
        
    }
    

    
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    PrintAllPrimeFrom1ToN(input);

    return 0;
}