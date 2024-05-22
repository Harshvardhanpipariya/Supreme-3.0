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
                cout <<col+1<<" ";
        }

        cout << endl;
    }

    return 0;
}