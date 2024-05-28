// check if a pair of three that sums equal to target exist or not
#include <iostream>
using namespace std;

void ThreeSum(int *nums, int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == target)
                {
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                }
            }
        }
    }
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
    
    ThreeSum(array,input,target);

    return 0;
}