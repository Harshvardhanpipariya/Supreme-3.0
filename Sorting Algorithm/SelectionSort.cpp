#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {

        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    vector<int> arr(5, 0);

    cout << "Enter Elements for array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(arr);

    cout << "Printing all element of array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "index " << i << " " << arr[i] << endl;
    }

    return 0;
}