#include <iostream>
#include <limits.h>
using namespace std;

// function me int ko parameter banane k time minimum col to batana hi padta hai
int MinimumValueIn2DArray(int arr[][4], int rowSize, int colSize)
{
    int min = INT_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    return min;
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
    }

   

    cout <<"Minimum value is : "<< MinimumValueIn2DArray(arr, 4, 4)<<endl;
    return 0;
}