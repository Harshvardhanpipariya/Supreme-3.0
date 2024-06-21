// target in a array
#include <iostream>
using namespace std;

bool findTarget(int *n, int size, int index, int target)
{

    if ((size) == index)
    {
        return false;
    }

    if (target == n[index])
    {
        return true;
    }
    findTarget(n, size, ++index, target);
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
    findTarget(n, 5, 0, target) ? cout << "Found target" << endl : cout << "Not Found Target" << endl;
    return 0;
}