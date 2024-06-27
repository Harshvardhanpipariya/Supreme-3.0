#include <iostream>
#include<algorithm>
using namespace std;



int main()
{

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for " << i << endl;
        cin >> array[i];
    }

    int target;
    cout << "Enter target Element" << endl;
    cin >> target;

    cout<<"Target is :"<<binary_search(array, array+5, target)<<endl;
    

    return 0;
}