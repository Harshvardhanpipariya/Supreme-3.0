#include <iostream>
#include <limits.h>
using namespace std;

// function me int ko parameter banane k time minimum col to batana hi padta hai
void ColumnWiseSum(int arr[][4], int rowSize, int colSize)
{
   
    for (int i = 0; i < colSize; i++)
    { int ColumnSum = 0;
        for (int j = 0; j < rowSize; j++)
        {
            ColumnSum = ColumnSum +arr[j][i];
        }

        cout<<"Column sum of column "<<i<<" is : "<<ColumnSum<<endl;
    }

    
}

int main()
{

    int arr[5][4];
    cout << "Enter all elements : " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }

   

    ColumnWiseSum(arr, 5, 4);
    return 0;
}