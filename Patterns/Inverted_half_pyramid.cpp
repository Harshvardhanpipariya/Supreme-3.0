#include<iostream>
using namespace std;


int main()
{
    int input;
    cout<<"Enter a number : ";
    cin>>input;

        

    for (int i = input; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
    
    return 0;
}