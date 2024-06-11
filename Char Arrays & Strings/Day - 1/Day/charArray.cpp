#include <iostream>
using namespace std;


int getLength(char *arr, int size)
{
    int count = 0;
    int index = 0;

    while (arr[index]!='\0')
    {
        count++;
        index++;        
    }
    
    return count;
}




int main()
{
    char arr[100];

    // doesnt work in gap situitation
    cin>>arr;
    cout<<arr<<endl;
    cout<<arr[3];

    cin.getline(arr,100);
    cout<<arr<<endl;


    cin.getline(arr,100,'\t');
    cout<<arr<<endl;

    return 0;
}