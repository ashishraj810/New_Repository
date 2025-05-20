     //code to find minimum element in a rotated array.

#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,5,6,7,0,1,2,};
    int start=0,n=sizeof(arr)/sizeof (arr[0]),end=n-1,mid,ans=arr[0];

    while(start<=end)
    {
        mid=end+(start-end)/2;

        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else 
        {
            ans=mid;
            end=mid-1;
        }
    }
    cout<<"The minimum element in the rotated array is :"<<arr[ans]<<" "<<"and its index is:"<<" "<<ans;
}