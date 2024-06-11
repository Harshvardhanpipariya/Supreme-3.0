#include <iostream>
using namespace std;

int getLength(char *arr)
{
    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

bool CheckPalindrome(char *arr)
{
    int length = getLength(arr);
    int end = length - 1;
    int start = 0;

    while (start < end)
    {
        if (arr[start] == arr[end])
        {
            start++;
            end--;
            continue;
            
        }
        else
        {
            return false;
            
        }
    }
    return true;
}

int main()
{
    char arr[100];

    cin >> arr;

    cout << "Length of String is :" << getLength(arr) << endl;
    cout<<CheckPalindrome(arr);
    return 0;
}