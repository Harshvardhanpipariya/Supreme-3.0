#include <iostream>
using namespace std;

// function me int ko parameter banane k time minimum col to batana hi padta hai
bool SearchingIn2DArray(int arr[][4], int rowSize, int colSize, int target)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
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

    cout << "Enter Target Element : ";
    int target;
    cin >> target;

    cout << SearchingIn2DArray(arr, 4, 4, target);
    return 0;
}