// check if a pair that sums equal to target exist or not
#include <iostream>
using namespace std;

pair<int, int> TwoSum(int *arr, int size, int target)
{
    // check all pairs
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }

    return ans;
}

int main()
{
    int input, target;

    cout << "Enter number for Array size : ";
    cin >> input;

    int *array = new int[input];

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "]" << endl;
        cin >> array[i];
    }

    cout << "Enter Target ";
    cin >> target;

    pair<int, int> ans = TwoSum(array, input, target);

    if (ans.first != -1)
    {
        cout << "Pair found " << endl;
        cout << ans.first << " " << ans.second << endl;
    }
    else
    {
        cout << "Pair Not Found " << endl;
    }

    return 0;
}