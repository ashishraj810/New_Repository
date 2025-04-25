#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,8,5,12,24,45,56};
    int start=0,end=6;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
}