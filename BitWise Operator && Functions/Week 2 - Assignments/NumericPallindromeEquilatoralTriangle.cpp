#include <iostream>
using namespace std;

void NumericPallindromeEquilatoralTriangle(int size)
{

    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j <= size; j++)
        {

            cout << "  ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
      
        if (i > 1)
        {
            for (int z = i; z >= 1; z--)
            {
                cout << z << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    NumericPallindromeEquilatoralTriangle(input);

    return 0;
}