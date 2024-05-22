#include <iostream>
using namespace std;

int main()
{
    int col, row;
    cout << "Enter a col : ";
    cin >> col;
    cout << "Enter a row : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 or i == row - 1)
            {
                cout << "*";
            }
            else if (j == 0 or j == col - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}