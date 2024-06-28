#include <iostream>
using namespace std;

void quickSort(int *a, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int pivot = end;
    int i = start - 1;
    int j = start;

    while (j < pivot)
    {
        if (a[j] < a[pivot])
        {
            ++i;
            swap(a[i], a[j]);
        }
        ++j;
    }

    i++;
    swap(a[i], a[pivot]);
    quickSort(a, start, i - 1);
}

int main()
{

    int arr[] = {12,43,35,76,345,76,234,675};

    quickSort(arr,0,8);


    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}