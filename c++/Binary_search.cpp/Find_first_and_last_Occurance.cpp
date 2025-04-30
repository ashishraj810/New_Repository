#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,1,1,1,2,5,5,5,5,5,12};
    int target;
    cout<<"Enter the target value :";
    cin>>target;
    int n=sizeof(arr)/sizeof arr[0];

    int start=0,end=n-1,first=-1,last=-1,mid;

        // for first occurence
        
        while(start<=end)
        {
            mid=start+(end-start)/2;

            if(arr[mid]==target)
            {
                first=mid;
                end=mid-1;
            }

            else if(arr[mid]>target)
            {
                end=mid-1;
            }

            else{
                start=mid+1;
            }
        }
           
            // For Last ccurence

        start=0,end=n;

        while(start<=end)
        {
            mid=start+(end-start)/2;

            if(arr[mid]==target)
            {
                last=mid;
                start=mid+1;
            }

            else if(arr[mid]>target)
            {
                end=mid-1;
            }

            else{
            start=mid+1;
            }
        }

        cout<<first<<" "<<last;

        return 0;

}