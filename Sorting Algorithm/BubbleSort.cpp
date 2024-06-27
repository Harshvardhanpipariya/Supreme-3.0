#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr)
{

    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    BubbleSort(arr);

    cout << "Printing all element of array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "index " << i << " " << arr[i] << endl;
    }

    return 0;
}