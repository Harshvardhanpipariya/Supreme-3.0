#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<int, int> arr;

    arr[1] = 12;
    arr[2] = 112;
    arr[3] = 1222;
    arr[5] = 122;
    arr[4] = 13;

    unordered_map<int, int>::iterator it; // iterator

    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << "Key: " << it->first << " " << "Value: " << it->second << endl;
    }

    // another method
    for (auto i : arr)
    {
        cout << "Key: " << i.first << " " << "Value: " << i.second << endl;
    }


    
    return 0;
}