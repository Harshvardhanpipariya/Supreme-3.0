#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter input number : ";
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        char a = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << a++ <<" ";
        }

        a--;

        while (a>'A')
        {
            a--;
            cout<<a<<" ";
        }
        
        cout << endl;
    }

    return 0;
}