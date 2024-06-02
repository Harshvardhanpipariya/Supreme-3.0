#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int MaximumSumSubArray(vector<int> &nums)
{

    // kadanes algo O(N)
    int ans = INT_MIN, sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        sum += num;
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }

    return ans;
}

int main()
{
    vector<int> arr(5, 0);

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Answer is: " << MaximumSumSubArray(arr);

    return 0;
}