#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,1,0,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size-1;

    while(start<end)
    {
        while(arr[start] !=1 && start<end)
        start++;
        while(arr[end]!=0 && start<end)
        end--;

        if(arr[start]==1)
          arr[start]=0;
        if(arr[end]==0)
        arr[end]=1;  
         
       start++;
       end--;
    }

    for(int i=0 ; i<size; i++)
    {
       cout<<arr[i]<<" ";
    }
}