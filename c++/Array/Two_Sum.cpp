#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,5,7,8,9};
    int target,i,index1=-1,index2=-1;
    cout<<"Enter the target :";
    cin>>target;

    int start=0,end=sizeof(arr)/sizeof(arr[0])-1;
    
    while(start<=end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<start<<" "<<end;
            break;
        }

        else if(arr[start]+arr[end]>target)
           end--;

        else 
           start++;
    }    
    return 0;
}