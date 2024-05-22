#include<iostream>
using namespace std;


int main()
{
    int input;
    cout<<"Enter a number : ";
    cin>>input;


    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout<<" * ";
        }

        cout<<endl;
        
    }
    
    return 0;
}