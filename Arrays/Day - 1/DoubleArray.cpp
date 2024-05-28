#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {

        arr[i] = arr[i] * 2;
    }
    cout << "OutPut of Double Array" << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}