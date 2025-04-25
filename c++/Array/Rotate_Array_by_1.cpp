#include<iostream>
using namespace std;

int main()
{
    
    int arr[8]={5,8,3,9,12,45,67,78};
    int temp=arr[8],i;

    for(i=i-2 ; i>=0 ; i--)
    {
        arr[i+1]=arr[i];
        arr[0]=temp;
    }
    for(i=0;i<8;i++)
    {
        cout<<arr[i];
    }


}