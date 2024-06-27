#include <iostream>
using namespace std;

void MergeTwoSortedArrays(int *arr, int size, int *arr1, int size1, int *ans)
{

    int z = 0;//for ans array
    int i = 0;//for arr array
    int j = 0;//for arr1 array
    while (i < size and j < size1)
    {
        if (arr[i] < arr1[j])
        {
            ans[z] = arr[i];
            i++;
            z++;
        }
        else
        {
            ans[z] = arr1[j];
            j++;
            z++;
        }
    }

    while (i < size)
    {
        ans[z] = arr[i];
        i++;
        z++;
    }

    while (j < size)
    {
        ans[z] = arr1[j];
        j++;
        z++;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 5, 7, 8, 10};
    int ans[10];
    MergeTwoSortedArrays(arr1, 5, arr2, 5, ans);

    for (int i = 0; i < 10; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}