#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,5,7,8,9};
    int target,i;
    cout<<"Enter the target :";
    cin>>target;

    for(i=0 ; i<5 ; i++)
    {
        if(arr[i]+arr[i+1]==target)
        {
            cout<<i<<" "<<(i+1);
        }

        else
        return -1;

    }
}