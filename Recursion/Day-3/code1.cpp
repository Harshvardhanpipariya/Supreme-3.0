#include <iostream>
using namespace std;


//babbar way
bool checkSorted(int arr[], int size, int index)
{
    // base case
    if (index == size - 1)
    {
        return true;
    }

    bool currAns = false;
    bool recurisonKaAns = false;

    // 1  case solve karo
    if (arr[index] < arr[index + 1])
    {
        currAns = true;
    }

    // recursion se aage bada do
    recurisonKaAns = checkSorted(arr, size, index + 1);

    return (currAns && recurisonKaAns);
}

int main()
{

    int arr[] = {10, 20, 300, 40, 50};
    int size = 4;
    int index = 0;
    bool ans = checkSorted(arr, size, index);
    cout << "Array is sorted or not: " << ans << endl;

    return 0;
}