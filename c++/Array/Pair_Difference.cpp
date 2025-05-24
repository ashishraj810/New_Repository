#include<iostream>
using namespace std;

int main()
{
    int arr[6]={3,5,7,8,12,15};
    int target,i,index1=-1,index2=-1,n;
    cout<<"Enter the target :";
    cin>>target;

    int start=0,next=1;
    n=sizeof(arr)/sizeof(arr[0]);

    while(next<n)
    {
        if(arr[next]-arr[start]==target)
        {
            cout<<index1<<" "<<index2;
            break;
        }

        else if(arr[next]-arr[start]<target)
        next++;

        else
        start++;
    }

     return 0;
    
}