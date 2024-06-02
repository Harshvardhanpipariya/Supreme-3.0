#include <iostream>
#include <vector>
using namespace std;

vector<int> TwosCompliment(vector<int> &arr)
{
    int n = arr.size();
    vector<int> twosComp(n + 1, 0);

    // step 1. flip the bits
    for (int i = 0; i < n; i++)
    {
        twosComp[i] = arr[i] == 0 ? 1 : 0;
    }

    // now i have flipped bits in my twosComp array

    // Step 2. add 1
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }

    if (carry)
    {
        twosComp[0] = carry;
    }

    return twosComp;
}

int main()
{
    vector<int> binary = {0, 0, 0, 0};
    cout << "here";
    vector<int> TwosComp = TwosCompliment(binary);
    for (int i = 0; i < TwosComp.size(); i++)
    {
        cout << TwosComp[i] << endl;
    }

    cout << endl;

    return 0;
}