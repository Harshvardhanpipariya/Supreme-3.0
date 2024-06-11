#include <iostream>
using namespace std;

void ReplaceCharacter(char orginalChar, char newChar, char *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == orginalChar)
        {
            arr[i] = newChar;
        }
    }
}

int main()
{
    char arr[100];

    // doesnt work in gap situitation
    cin >> arr;

    ReplaceCharacter('@',' ',arr,100);
    cout << arr << endl;

    return 0;
}