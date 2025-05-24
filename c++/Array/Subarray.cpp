#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,5,7,8,9,12,15,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp,i;
    cout<<"Subarrays of one size :-"<<endl;

    for(i=0 ; i<n ; i++)
    {
       temp=arr[i];
       cout<<arr[i]<<" "<<endl;

    }
    cout<<"Subarrays of two size :-"<<endl;

    for(i=0 ; i<n-1 ; i++)
    {
       temp=arr[i],arr[i+1];
       cout<<arr[i]<<" "<<arr[i+1]<<endl;

    }

    cout<<"Subarrays of three size :-"<<endl;

    for(i=0 ; i<n-2 ; i++)
    {
       temp=arr[i],arr[i+1],arr[i+2];
       cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;

    }

    cout<<"Subarrays of four size :-"<<endl;

    for(i=0 ; i<n-3 ; i++)
    {
       temp=arr[i],arr[i+1],arr[i+2],arr[i+3];
       cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<arr[i+3]<<endl;

    }

    cout<<"Subarrays of five size :-"<<endl;

    for(i=0 ; i<n-4 ; i++)
    {
       temp=arr[i],arr[i+1],arr[i+2],arr[i+3],arr[i+4];
       cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<arr[i+3]<<" "<<arr[i+4]<<endl;

    }


return 0;
    


}