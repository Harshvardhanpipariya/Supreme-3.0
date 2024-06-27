#include <iostream>
#include <vector>
using namespace std;

int FindPivotIndex(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
        {
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
                end = mid;
            else
                end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{

    vector<int> arr(5, 0);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << FindPivotIndex(arr);

    return 0;
}