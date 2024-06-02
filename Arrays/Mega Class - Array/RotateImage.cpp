#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int size1 = matrix.size();
    int size2 = matrix[0].size();

    // Step 1.Transpose the  matrix
    for (int i = 0; i < size1; i++)
    {
        for (int j = i; j < size2; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //   Step 2. Reverse the matrix row-wise
    for (int i = 0; i < size1; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> arr(3, vector<int>(3, 0));

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter elements of row " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    rotate(arr);

    cout << "ROTATED MATRIX" << endl;
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