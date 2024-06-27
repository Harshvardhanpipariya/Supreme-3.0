#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    int size = arr.size();


    //i = 0 , chhod deta hu
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;


        //Move elements of arr[0.....i-1] that are greater than
        //key to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;       //insertion
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

    InsertionSort(arr);

    cout << "Printing all element of array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "index " << i << " " << arr[i] << endl;
    }

    return 0;
}