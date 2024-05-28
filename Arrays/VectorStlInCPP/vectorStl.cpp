#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initilization
    vector<int> ans;
    // vector<type> arr(size,defalut value);
    vector<int> arr(5, -1);

    // both are new method so not granty of running in all complier
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4{1, 2, 3, 4, 5};


    // how to copy vector
    vector<int> arr6(arr4);

    // vector has two variable capacity & size
    // size indicate how much data we have pushed
    // capacity indicate how much size vector has alloted
    ans.push_back(12);
    ans.push_back(12);
    ans.push_back(12);
    ans.push_back(34);
    ans.push_back(34);
    ans.push_back(34);
    ans.push_back(1);
    ans.push_back(1);
    ans.push_back(1);
    ans.push_back(1);
    cout << ans.capacity() << endl;
    cout << ans.size() << endl;
    ans.pop_back();
    cout << ans.size() << endl;

    // ans.at(i) print ans[i] same same but different

    cout << ans.at(1) << endl;

    // clearing data for vector
    ans.clear();
    cout << ans.size();

    return 0;
}