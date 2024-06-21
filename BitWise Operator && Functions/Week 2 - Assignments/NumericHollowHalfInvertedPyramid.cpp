#include <iostream>
using namespace std;

void NumericHollowHalfInvertedPyramid(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j <= size; j++)
        {
            if (i == 1 or i == size or i == size - 1 or j == i or j == size)
            {
                cout << j<<" ";
            }else{
                cout<<"  ";
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

    NumericHollowHalfInvertedPyramid(input);

    return 0;
}