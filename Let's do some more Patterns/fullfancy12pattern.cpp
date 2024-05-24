#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter input number : ";
    cin >> input;

    for (int i = 0; i < input; i++)
    {

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    input--;
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < 2 * (input - i) - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << input - i;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}