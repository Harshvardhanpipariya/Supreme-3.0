#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (j == 0 or j == input - 1)
            {
                cout << "*";
            }
            else
            {
                if (i == 0 or i == input - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}