#include <iostream>
using namespace std;

int singleNumber(int *nums, int size)
{

    int ans = 0;
    for (int i = 0; i <size; i++)
    {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main()
{
    int input;

    cout << "Enter number for Array size : ";
    cin >> input;

    int *array = new int[input];

    for (int i = 0; i < input; i++)
    {
        cout << "Enter value for a[" << i << "]" << endl;
        cin >> array[i];
    }

    cout<<"Answer is "<<singleNumber(array,input)<<endl;

    return 0;
}