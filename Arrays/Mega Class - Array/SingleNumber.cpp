#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> a;
    for (auto x : nums)
        a[x]++;

    unordered_map<int, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        if (it->second == 1)
            return it->first;
    return -1;
}

int main()
{
    vector<int> binary(5, 0);

    for (int i = 0; i < 5; i++)
    {
        cin >> binary[i];
    }

    cout << "Answer is: " << singleNumber(binary);

    return 0;
}