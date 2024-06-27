#include <iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    int leftLength = mid - start + 1;
    int rightLength = end - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];
    int index = start;

    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }

    index = mid + 1;
    for (int i = 0; i < rightLength; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[mainArrayIndex] = leftArr[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = rightArr[rightIndex];
            rightIndex++;
        }
        mainArrayIndex++;
    }

    while (leftIndex < leftLength)
    {
        arr[mainArrayIndex] = leftArr[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    while (rightIndex < rightLength)
    {
        arr[mainArrayIndex] = rightArr[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void MergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {2, 3, 54, 7, 78, 45, 34, 5678, 345, 56, 345, 4567, 2345};
    int size = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
