#include <iostream>
using namespace std;

// 1.extra space le k kar skte hai
// 2. normal way with O(n*n)

int main()
{

    int arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing matrix : " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            swap(arr[i][j] ,arr[j][i]);
        }
    }

    cout << "Printing transpose : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}