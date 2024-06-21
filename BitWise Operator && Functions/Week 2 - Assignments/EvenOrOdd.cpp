#include <iostream>
using namespace std;

void EvenOrOdd(int number)
{
    // if(number%2)
    // {
    //     cout<<"Odd number"<<endl;
    // }else{
    //     cout<<"Even number"<<endl;
    // }

    //by bitwise method
    if (number&1)
    {
        cout<<"Odd number"<<endl;
    }else{
        cout<<"Even number"<<endl;

    }
    
    
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    EvenOrOdd(input);

    return 0;
}