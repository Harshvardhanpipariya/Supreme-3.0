// n = 1 to 9
#include <iostream>
#include <assert.h>
using namespace std;

void FancyPattern1(int size)
{
    for (int i = 0; i < size; i++)
    {
        int start_num_index = 8 - i;
        int num = i + 1;
        int count_num = num;
        for (int j = 0; j < 17; j++)
        {
            if (j == start_num_index && count_num > 0)
            {
                cout << num;
                start_num_index += 2;
                count_num--;
            }
            else
            {
                cout << "*";
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
    assert(input <= 9);
    FancyPattern1(input);

    return 0;
}