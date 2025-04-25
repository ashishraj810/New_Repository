#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,0,0,1,1,0};
    int i,n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;

    while(start<end)
    {
        if(arr[start]==0)
        start++;

        else if(arr[end]==1)
        end--;

        if(start>end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;

    

}