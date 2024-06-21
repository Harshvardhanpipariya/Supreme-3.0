#include <iostream>
using namespace std;

void DisplayAreaOfCircle(int r)
{

    float ans = (3.14)*r*r;
    cout<<ans<<endl;
    
}

int main()
{
    int input;
    cout << "Enter input radius: ";
    cin >> input;

    DisplayAreaOfCircle(input);

    return 0;
}