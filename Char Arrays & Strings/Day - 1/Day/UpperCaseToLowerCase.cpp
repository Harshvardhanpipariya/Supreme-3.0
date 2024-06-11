#include <iostream>
using namespace std;

void UpperCaseToLowerCase(char *arr,int size)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] = arr[i] - 'A' +'a';
    }
    
}

int main()
{
    char arr[100];

   cin>>arr;

   UpperCaseToLowerCase(arr,100);
   cout<<arr;

    return 0;
}