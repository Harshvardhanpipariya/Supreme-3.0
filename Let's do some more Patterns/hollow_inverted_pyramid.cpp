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
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // 2.starts
        for (int col1 = 0; col1 < input - row; col1++)
        {
            if (row == 0 or row == input - 1 or col1 == 0 or col1 == input - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}