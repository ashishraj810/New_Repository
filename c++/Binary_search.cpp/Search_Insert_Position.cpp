#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,3,5,6};
    int start=0,end=(sizeof(arr)/sizeof arr[0])-1;
    int mid;
    int index=sizeof(arr)/sizeof arr[0];
    int target;
    cout<<"Enter the target value :";
    cin>>target;

    


    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==target)
        {
            index=mid;
            break;
        }

        else if(arr[mid]<target)
           start=mid+1;

        else{
            index=mid;
            end=mid-1;
        }
    }

    cout<<index;
 }