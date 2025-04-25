#include<iostream>
using namespace std;

int main()
{
    int arr[11]={12,2,34,45,56,6,778,78,89,67,234};

    int start=0,end=10;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0 ; i<11 ; i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;
}