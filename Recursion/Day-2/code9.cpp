// Binary search
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int *arr, int n, int s, int e, int target)
{

    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] > target)
    {
       return binarySearch(arr, n, s, mid - 1, target);  //return dalna hai dono jagah (BOLNA MAT!!!!)
    }

    if (arr[mid] < target)
    {
       return binarySearch(arr, n, mid + 1, e, target);  //return dalna hai dono jagah (BOLNA MAT!!!!)
    }
}

int main()
{

    int n[5], target;
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    cout << "Enter the Target : ";
    cin >> target;



    cout <<"Index of element is : "<< binarySearch(n, 5, 0, 5-1, target)<<endl;
    return 0;
}