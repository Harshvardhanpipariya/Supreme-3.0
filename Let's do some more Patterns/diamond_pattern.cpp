#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "Enter input number : ";
    cin >> input;

    for (int row = 0; row < input; row++)
    {
        // 1.spaces
        for (int col = 0; col < input - row - 1; col++)
        {
            cout << " ";
        }

        // 2.starts
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int row = 0; row < input; row++)
    {
        // 1.spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // 2.starts
        for (int col = input; col > row; col--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}