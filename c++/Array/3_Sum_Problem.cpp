#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,2,7,3,8,12,14,10};
    int target=24;
    int n=sizeof(arr)/sizeof(arr[0]);

    // first sort the array using bubble sort
    for(int i=n-2 ; i>=0 ; i--)
    {
        for(int j=0 ; j<=i ; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }

    for(int k=0 ; k<n-2 ; k++ )
    {
        int ans=target-arr[k];
        int start=k+1,end=n-1;

        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
            {
            cout<<"1"<<endl;
            return 0;
            }

            else if(arr[start]+arr[end]>ans)
            end--;

            else
            start++;
            
        }
    }
    return 0;
}