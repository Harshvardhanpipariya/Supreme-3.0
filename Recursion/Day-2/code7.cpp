// store in vector All Evens Number
#include <iostream>
#include<vector>
using namespace std;

void PrintAllOdd(int *n, int size, int index,vector<int> &arr)
{
    if (size == index)
    {
        return;
    }

    // if (!(n[index] % 2))
    // {
    //     cout << "even number at " << index << " " << n[index] << endl;
    // }

    // fast code
    if (!(n[index] & 1))
    {
        arr.push_back(n[index]);
    }

    PrintAllOdd(n, size, ++index, arr);
}

int main()
{
    int n[5];
    vector<int> arr;
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    PrintAllOdd(n, 5, 0,arr);


    cout<<"Printing value of vector"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<endl;
    }
    
    return 0;
}