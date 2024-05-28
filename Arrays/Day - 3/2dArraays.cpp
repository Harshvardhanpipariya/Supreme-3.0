#include <iostream>
using namespace std;

int main()
{
    // declation and initilization
    // 2 is row &  3 is column

    int arr[3][3] = {{2, 3, 4},
                     {2, 3, 4},
                     {2, 3, 4}};

    // print arr row 0 and column 1
    cout << arr[0][1] << endl;

    // row wise traversal
    cout << "row wise traversal" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // column wise traversal
    cout << "column wise traversal" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    

    // taking -> input row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> arr[i][j];
        }

        
    }

    
    cout << "row wise traversal" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}