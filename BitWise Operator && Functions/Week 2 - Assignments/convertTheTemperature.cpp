#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius)
{
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;
    vector<double> v;
    v.push_back(k);
    v.push_back(f);

    return v;
}

int main()
{
    double input;
    cout << "Enter input : ";
    cin >> input;

    vector<double> arr = convertTemperature(input);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}