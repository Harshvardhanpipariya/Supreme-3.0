#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter input number : ";
    cin >> input;

    // PART-1
    for (int i = 0; i < input; i++)
    {
        // I. STARS
        for (int j = 0; j < input - i; j++)
        {
            cout << "*";
        }

        // II.SPACES
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < input - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // 2.PART
    for (int i = 0; i < input; i++)
    {
        // I.STAR
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // II.SPACE
        for (int j = 0; j < 2 * (input - i) - 1; j++)
        {
            cout << " ";
        }
        // III.STAR
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}