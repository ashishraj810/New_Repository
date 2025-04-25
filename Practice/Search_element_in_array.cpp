#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,5,2,56,34,23};
    int index=-1,i,target;

    cout<<"Enter the element to find:";
    cin>>target;

    for(i=0;i<sizeof(arr)/sizeof arr[0];i++)
    {
        if(arr[i]==target)
        {
            index=i;
        }
    }
    cout<<index;


}