// h.w. (ARRAY IS SORTED OR NOT)
#include <iostream>
using namespace std;

bool sortedOrNot(int *arr,int size,int index)
{
    if (index == size-1)
    {
        return true;
    }

    if(arr[index]<arr[index+1])
    {
       return  sortedOrNot(arr,size,++index);
       
    }else{
        cout<<"x"<<index<<endl;
        return false;
    }

    
}

int main()
{

   int n[5];
    cout << "Enter the Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    sortedOrNot(n,5,0)? cout<<"Array is sorted"<<endl : cout<<"Array is not sorted"<<endl;

    return 0;
}