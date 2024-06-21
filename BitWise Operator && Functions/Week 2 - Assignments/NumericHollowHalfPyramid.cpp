#include <iostream>
using namespace std;

void NumericHollowHalfPyramid(int size)
{

    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i == 0 or i == 1 or i == size  or j == 0 or j == i - 1)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
                //yaha do space rahe ga to hi sahi rahe ga kyu ki upar wale print me do chej print ho raha
            }
        }
        cout << endl;
    }
}

int main()
{
    int input;
    cout << "Enter input : ";
    cin >> input;

    NumericHollowHalfPyramid(input);

    return 0;
}