#include <iostream>
using namespace std;

void FindLastOccurance(int *nums, int size, int target, int &ansIndex)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2; posibility of intger overflow that why we use
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ansIndex = mid;
            start = mid + 1;
        }

        if (target > nums[mid])
        {
            start = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
}

int main()
{

    int array[10];
    int ansIndex = -1;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> array[i];
    }

    int target;
    cout << "Enter target Element" << endl;
    cin >> target;
    FindLastOccurance(array, 10, target, ansIndex);

    cout << "Position of target is :" << ansIndex << endl;

    return 0;
}