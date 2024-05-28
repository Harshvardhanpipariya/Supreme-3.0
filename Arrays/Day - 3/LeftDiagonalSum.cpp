#include <iostream>

using namespace std;

// function me int ko parameter banane k time minimum col to batana hi padta hai
// optimize way
void DiagonalWiseSum(int arr[][4], int rowSize, int colSize)
{
    int DiagonalSum = 0;

    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = i; j < colSize; j++)
    //     {
    //         if (i==j)
    //         {

    //         DiagonalSum = DiagonalSum +arr[i][j];

    //         }

    //     }

    // }

    for (int i = 0; i < rowSize; i++)
    {

        DiagonalSum = DiagonalSum + arr[i][i];
    }

    cout << "Diagonal Sum is : " << DiagonalSum << endl;
}

int main()
{

    int arr[4][4];
    cout << "Enter all elements : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    DiagonalWiseSum(arr, 4, 4);
    return 0;
}