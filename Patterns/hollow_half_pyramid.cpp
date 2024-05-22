#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;

    for (int row = 0; row < input; row++)
    {
        int totalColumns = row+1;
        for (int col = 0; col < totalColumns; col++)
        {

            if (row == 0 or row == 1 or row == input - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 or col == totalColumns-1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}