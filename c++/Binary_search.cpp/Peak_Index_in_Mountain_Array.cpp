#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,5,11,15,18,20,21,22,24,34,45,10,9,8};
    int start=0,mid,ans;
    int end=sizeof (arr)/ sizeof arr[0];

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else
        end=mid-1;
    }
    cout<<ans<<endl;
}