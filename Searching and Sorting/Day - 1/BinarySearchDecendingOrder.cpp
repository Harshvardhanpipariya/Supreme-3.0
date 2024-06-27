#include <iostream>
using namespace std;

int BinarySearchDecending(int *nums, int size, int target)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2; posibility of intger overflow that why we use
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }

        if (target < nums[mid])
        {
            start = mid + 1;
        }
        else if (target > nums[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> array[i];
    }

    int target;
    cout << "Enter target Element" << endl;
    cin >> target;

    cout << "Position of target is :" << BinarySearchDecending(array, 5, target) << endl;
    return 0;
}