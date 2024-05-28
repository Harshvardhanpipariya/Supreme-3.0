#include <iostream>
#include <limits.h>
using namespace std;

// function me int ko parameter banane k time minimum col to batana hi padta hai
void RowWiseSum(int arr[][4], int rowSize, int colSize)
{
   
    for (int i = 0; i < rowSize; i++)
    { int rowSum = 0;
        for (int j = 0; j < colSize; j++)
        {
            rowSum = rowSum +arr[i][j];
        }

        cout<<"Row sum of row "<<i<<" is : "<<rowSum<<endl;
    }

    
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
        cout<<endl;
    }

   

    RowWiseSum(arr, 4, 4);
    return 0;
}