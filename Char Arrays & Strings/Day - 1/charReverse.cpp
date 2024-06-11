#include <iostream>
using namespace std;

int getLength(char *arr, int size)
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

void CharReverse(char arr[], int size1)
{
    int size = getLength(arr, size1);
    int end = size - 1;
    int start = 0;

    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    // doesnt work in gap situitation
    cin >> arr;

    CharReverse(arr, 100);

    cout << arr;

    return 0;
}