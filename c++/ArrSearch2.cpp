#include<iostream>
using namespace std;

int main()
{
    int arr[12]={1,238,345,356,567,569,339,234,321,509,398,432};
    int ans=-1;
    int index;

    for (int i=0 ; i<=12 ; i++)         //code for finding the index of any element in array//
    {
        if(arr[i]==569)
        index=i;
        ans=index;
    }

    cout<<ans;

    return 0;
}