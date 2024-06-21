#include <iostream>
using namespace std;

void SolidHalfDiamond(int size)
{

    for (int i = 1; i <= size; i++)
    {
       for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = 1; i <= size; i++)
    {
       for (int j = size; j > i; j--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    SolidHalfDiamond(input);

    return 0;
}