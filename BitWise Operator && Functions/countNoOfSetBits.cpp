#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number : ";
    cin >> input;

    int setBitCount = 0;
    while (input != 0)
    {
        int lastbit = (input & 1);
        if (lastbit == 1)
        {
            setBitCount = setBitCount + 1;
        }

        input = input >>1;
        
    }


    cout<<"Enter total bits : "<<setBitCount<<endl;

    return 0;
}