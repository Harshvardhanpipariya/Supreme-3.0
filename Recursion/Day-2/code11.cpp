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
        // cout<<"x"<<index<<endl;
        return false;
    }

    
}

int main()
{

  
    int arr[] = {10, 550, 30, 40, 50};
    int size = 4;
    int index = 0;
    bool ans = sortedOrNot(arr, size, index);
    cout << "Array is sorted or not: " << ans << endl;

    return 0;

    return 0;
}